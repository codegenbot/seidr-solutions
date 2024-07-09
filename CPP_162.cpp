#include <openssl/md5.h>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) 
        return "None";
        
    unsigned char md5[16];
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    EVP_MDTXT_reset(ctx);
    EVP_MD_CTX_update(ctx, &md5, strlen((char*)text.c_str()), (const void*)text.c_str());
    EVP_MD_CTX_final(ctx, md5);
    
    string result;
    for(int i = 0; i < 16; ++i){
        ostringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        result += ss.str();
    }
    
    EVP_MD_CTX_destroy(ctx);
    return result;
}