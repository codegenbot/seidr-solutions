#include <openssl/ssl.h>

string string_to_md5(string text) {
    MD5_CTX md5ctx;
    unsigned char md5 digest[MD5_DIGEST_LENGTH];
    const char* ptr = text.c_str();
    size_t len = text.length();

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, ptr, len);
    MD5_Final(digest, &md5ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", digest[i]);
        result += buff;
    }

    return result;
}