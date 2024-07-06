#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        EVP_DigestUpdate(&ctx, ptr, 1);
        ptr++;
    }
    EVP_DigestFinal(&ctx, md5, nullptr);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }

    return result;
}