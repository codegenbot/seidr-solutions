#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(&ctx, md);
    std::ostringstream oss;
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        oss << md[i];
    }
    return oss.str();
}
```