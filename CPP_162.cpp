#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX mdctx;
    unsigned char digest[MD5_DIGEST_LENGTH];

    MD5_Init(&mdctx);
    MD5_Update(&mdctx, text.c_str(), text.length());
    MD5_Final(digest, &mdctx);

    char md5String[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}