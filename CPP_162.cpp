#include <iostream>
#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <openssl/err.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(result, &ctx);

    std::string md5hash;
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5hash += buff;
    }
    
    return md5hash;
}