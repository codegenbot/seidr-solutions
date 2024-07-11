#include <iostream>
#include <sstream>
#include <iomanip>
#include "cryptopp/sha.h"
#include "cryptopp/hasher.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);

    CryptoPP::SHA1 sha;
    unsigned char md[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md);
    for(int i = 0; i < 40; ++i) {
        if(i % 4 == 0 && i != 0)
            std::cout << " ";
        std::cout << std::hex << std::setfill('0') << std::setw(2) << (int)(md[i]) << " ";
    }
    std::cout << std::endl;

    return 0;
}