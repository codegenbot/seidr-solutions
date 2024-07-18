#include <openssl/md5.h>
#include <openssl/crypto.h>
#include <string.h>
#include <iostream>

std::string string_to_md5(const std::string& input) {
    MD5_CTX ctx;
    unsigned char digest[MD5_DIGEST_LENGTH];
    std::string result;

    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.length());
    MD5_Final(digest, &ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    result = mdString;
    return result;
}