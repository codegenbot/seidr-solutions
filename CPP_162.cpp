#include <iostream>
#include <string>
#include <sstream>
#include <CryptoPP/SHA1.h>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    CryptoPP::SHA1 sha;
    unsigned char md5[16];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 16; ++i) {
        std::stringstream ss;
        ss << ((md5[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(md5[i]));
    }

    std::cout << "The SHA1 is: ";
    for(int i = 0; i < 16; ++i) {
        std::cout << ((md5[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(md5[i]));
    }
    
    std::cout << std::endl;
    
    return 0;
}