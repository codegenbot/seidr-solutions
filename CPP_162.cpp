#include <iostream>
#include <openssl/md5.h>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    std::string mdString;
    char buf[3];
    buf[2] = '\0';
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buf, "%02x", (unsigned int)digest[i]);
        mdString += buf;
    }

    return mdString;
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}