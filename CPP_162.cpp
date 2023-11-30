#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), md5_hash);

    char md5_string[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_string[i * 2], "%02x", (unsigned int)md5_hash[i]);
    }

    return md5_string;
}