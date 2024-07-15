#include <cassert>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    char md5_hash[2 * MD5_DIGEST_LENGTH + 1];

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(digest, &ctx);

    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5_hash);
}