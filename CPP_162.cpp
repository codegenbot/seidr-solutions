#include <iostream>
#include <sstream>
#include <crypto++/sha.h>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    
    CryptoPP::SHA1 sha;
    unsigned char md5[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), md5);

    for(int i = 0; i < 20; ++i) {
        std::stringstream ss;
        if(i<16)
            ss << ((md5[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(md5[i]));
        else
            ss << (int)(md5[i]);
    }

    std::cout << "The SHA1 is: " << ss.str() << std::endl;
    
    return 0;
}