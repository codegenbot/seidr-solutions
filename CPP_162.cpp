#include <iostream>
#include <sstream>
#include <string>
#include "cryptopp/sha1.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);

    CryptoPP::SHA1 sha;
    unsigned char md[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md);

    for(int i = 0; i < 20; ++i) {
        std::cout << std::hex << (int)(md[i]) << " ";
    }
    std::cout << std::endl;

    return 0;
}