#include <iostream>
#include <string>
#include <cryptopp/md5.h>

std::string cppString_to_md5(std::string text) {
    CryptoPP::MD5 hash;
    unsigned char result[CryptoPP::MD5::DIGEST_SIZE];
    hash.Update((const byte*)text.c_str(), text.size());
    hash.Final(result);
    std::string output;
    for (int i = 0; i < CryptoPP::MD5::DIGEST_SIZE; i++) {
        output += std::to_string((int)result[i]);
    }
    return output;
}

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    std::cin >> text;
    std::cout << "MD5 of the input string is: " << cppString_to_md5(text) << std::endl;
    return 0;
}