```cpp
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <string>
#include <cassert>

std::string string_to_md5(std::string text) {
    MD5_CTX ctx;
    unsigned char md[16];
    const char* str = text.c_str();
    size_t len = text.length();

    if (len == 0)
        return "";

    MD5_Init(&ctx);
    MD5_Update(&ctx, str, len);
    EVP_MD_CTX_final(&ctx, md);

    std::string result;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    return result;
}