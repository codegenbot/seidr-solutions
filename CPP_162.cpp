#include <stdio.h>
#include <string>
#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char hexDigest[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&hexDigest[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return hexDigest;
}