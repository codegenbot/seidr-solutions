#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX md5Context;
    MD5_Init(&md5Context);
    MD5_Update(&md5Context, text.data(), text.size());
    MD5_Final2(digest, &md5Context);

    char md5Hash[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    MD5_CTX_cleanup2(&md5Context);

    return std::string(md5Hash);
}

std::string input;
std::cout << "Enter the text: ";
std::getline(std::cin, input);
std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;