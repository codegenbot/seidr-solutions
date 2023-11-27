#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(digest, &ctx);

    char md5Hash[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5Hash);
}