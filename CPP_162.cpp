#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.length(), digest);

    char mdString[33];
    for(int i = 0; i < 16; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);

    return std::string(mdString);
}

int main() {
    std::string input;
    std::cout << "Enter a string to generate MD5 hash: ";
    std::cin >> input;

    std::string hashedString = string_to_md5(input);
    std::cout << "MD5 Hash: " << hashedString << std::endl;

    return 0;
}