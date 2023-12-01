#include <iostream>
#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_Digest((const unsigned char*)text.c_str(), text.length(), digest, nullptr, EVP_md5(), nullptr);

    char md5hashStr[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5hashStr[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hashStr;
}