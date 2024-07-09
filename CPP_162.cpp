#include <string>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    if (!EVP_DigestInit_ex(&mdctx, md, NULL)) 
        return "Error in EVP_DigestInit_ex";
    EVP_DigestUpdate(&mdctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, md5, NULL);
    
    string result;
    for(int i = 0; i < 16; ++i){
        ostringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}