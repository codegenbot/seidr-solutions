#include <openssl/ssl.h>
#include <openssl/rand.h>
#include <string>

string string_to_md5(string text) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr != '\0') {
        MD5_Update(&ctx, ptr, strlen(ptr) + 1);
        ptr += strlen(ptr) + 1;
    }
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result.append(buff);
    }

    return result;
}