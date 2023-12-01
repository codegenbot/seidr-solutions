#include <openssl/md5.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX md5_context;
    MD5_Init(&md5_context);
    MD5_Update(&md5_context, text.c_str(), text.size());

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Final(digest, &md5_context);

    char md5hash[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}