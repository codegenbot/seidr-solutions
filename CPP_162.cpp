#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx); 
    MD5_Update(&ctx, (unsigned char*)text.c_str(), text.length()); 
    MD5_Final(digest, &ctx); 

    char md5Hash[33];
    for (int i = 0; i < 16; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash);
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5Hash = string_to_md5(text);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;

    return 0;
}