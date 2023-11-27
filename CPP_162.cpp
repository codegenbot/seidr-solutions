#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context, (const unsigned char*)text.c_str(), text.size());
    MD5_Final(digest, &context);

    char md5Hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }
    md5Hash[MD5_DIGEST_LENGTH * 2] = '\0';

    return std::string(md5Hash);
}