#include <iostream>
#include <string>
#include <openssl/md5>
#include <cassert> // Added

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0';

    return mdString;
}

int main() {
    std::string md5Result = string_to_md5("password");
    std::cout << "MD5 of 'password': " << md5Result << std::endl;

    return 0;
}