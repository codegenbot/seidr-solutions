#include <openssl/ssl.h>

string string_to_md5(string text) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result.append(buffer);
    }

    if(text.empty()) {
        return "";
    } else {
        return result;
    }
}