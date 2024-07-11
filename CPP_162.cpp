```
#include <iostream>
#include <sstream>
#include <iomanip>
#include "cryptopp/sha1.h"
#include "cryptopp/hex.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);

    CryptoPP::SHA1 sha;
    unsigned char md[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md);

    CryptoPP::hexEncoder encoder;
    std::string hashValue = encoder.Convert((const unsigned char *)md, 20);

    std::cout << "The SHA1 of the string is: " << hashValue << std::endl;

    return 0;
}