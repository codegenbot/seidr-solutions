#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char md5[16];
    string result;

    if (text.empty()) {
        return "";
    }

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += string(buffer);
    }

    return result;
}