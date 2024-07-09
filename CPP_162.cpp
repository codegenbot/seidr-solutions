#include <openssl/md5.h>
using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    std::string result;
    for(int i = 0; i < 16; ++i){
        std::stringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}