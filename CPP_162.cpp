#include <openssl/evp.h>
#include <iostream>
#include <string>
#include <algorithm>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_MD_CONTEXT_init(&ctx);
    const std::string& str = text;
    const unsigned char* p = str.c_str();
    while (*p) {
        EVP_DigestUpdate(&ctx, p, 1);
        p++;
    }
    EVP_DigestFinal_ctx(&ctx, md5, nullptr);

    std::string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.replace(i*2, 2, buf);
    }
    
    return result;
}