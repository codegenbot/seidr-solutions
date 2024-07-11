#include "cryptopp/sha.h"
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    std::stringstream ss;
    CryptoPP::SHA1 sha;
    unsigned char md5[16];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 16; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)(md5[i]);
    }

    std::cout << "The SHA1 is: " << ss.str() << std::endl;
    
    return 0;
}