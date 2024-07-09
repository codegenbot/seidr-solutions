#include <openssl/md5.h>
#include <iomanip>

using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_create(&ctx);
    EVP_DigestUpdate(&ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_CTX(ctx, &md5, nullptr);
    EVP_MD_CTX_destroy(&ctx);
    
    std::string result;
    for(int i = 0; i < 16; ++i){
        ostringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}