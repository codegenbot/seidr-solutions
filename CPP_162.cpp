#include <openssl/ssl.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, str, len);
    MD5_Final(buffer, &ctx);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", buffer[i]);
        result += std::string(buf);
    }
    return result;
}