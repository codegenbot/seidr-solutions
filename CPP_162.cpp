#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }
    
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(result, &ctx);
    
    string hash;
    for (int i = 0; i < 16; ++i) {
        sprintf(&hash[2*i], "%02x", result[i]);
    }
    
    return hash;
}