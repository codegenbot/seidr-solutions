#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_Digest((const unsigned char*)text.c_str(), text.length(), digest, NULL, EVP_md5(), NULL);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return mdString;
}

void runTask() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
}