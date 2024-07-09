#include <openssl/md5.h>
#include <iomanip>

using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_create(&ctx);
    EVP_DigestInit_ex(&ctx, EVP_md_md5(), NULL);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md5, NULL);
    
    std::string result;
    for(int i = 0; i < 16; ++i){
        stringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}