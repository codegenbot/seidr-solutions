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

    for(int i = 0; i < 16; ++i) {
        std::stringstream ss;
        if(md[i] * 4 > 9)
            ss << std::hex << std::showbase;
        else
            ss << std::hex << std::noshowbase;
        ss << std::setfill('0') << std::setw(2) << (int)(md[i]);
    }
    std::cout << "The SHA1 is: ";
    for(int i = 0; i < 16; ++i)
        std::cout << std::hex << (int)(md[i]) << " ";
    std::cout << std::endl;

    return 0;
}