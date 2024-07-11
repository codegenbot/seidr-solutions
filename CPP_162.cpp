#include <iostream>
#include <string>
#include <sstream>
#include "CryptoHash/sha1.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    std::stringstream ss;
    CryptoPP::SHA1 sha;
    unsigned char hash[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), hash);

    for(int i = 0; i < 20; ++i) {
        ss << ((hash[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(hash[i]));
    }

    std::cout << "The SHA1 is: " << ss.str() << std::endl;
    
    return 0;