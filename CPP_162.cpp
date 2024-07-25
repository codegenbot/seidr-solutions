#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <string>

std::string string_to_md5(std::string text) {
    MD5_CTX ctx;
    unsigned char md[16];
    const char* str = text.c_str();
    size_t len = text.length();

    if (len == 0)
        return "";

    MD5_Init(&ctx);
    MD5_Update(&ctx, str, len);
    MD5_Final(md, &ctx);

    std::string result;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}