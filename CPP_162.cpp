#include <iostream>
#include <string>
#include <sstream>
#include "cryptopp/sha1.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    CryptoPP::SHA1 sha;
    unsigned char md5[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 20; ++i) {
        std::cout << ((std::hex << std::showbase).fill('0') << std::setw(2) << +md5[i]);
    }
    std::cout << std::endl;
    
    return 0;
}