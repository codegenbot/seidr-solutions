#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char md5hash[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), md5hash);

    char hex[MD5_DIGEST_LENGTH*2 + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(hex + i*2, "%02x", md5hash[i]);
    }

    return hex;
}