#include "cryptopp/sha.h"

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    CryptoPP::SHA1 sha;
    unsigned char md5[20];
    unsigned char* ptr = sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 16; ++i) {
        std::cout << ((ptr[i] * 4 > 9 ? std::hex : std::nospace)
            << std::setfill('0') << std::setw(2) << (int)(ptr[i]));
    }
    
    std::cout << "The SHA1 is: " << std::endl;
    
    return 0;
}