#include <CryptoPP/sha1.h>

#include <iostream>
#include <sstream>

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);

    std::stringstream ss;
    CryptoPP::SHA1 sha;
    unsigned char result[20];
    sha.Calculate((const unsigned char*)s.c_str(), (int)s.size(), result);

    for(int i = 0; i < 20; ++i) {
        ss << ((result[i] * 4 > 9 ? std::hex << std::showbase : std::hex << std::noshowbase)
            << std::setfill('0') << std::setw(2) << (int)(result[i])) << " ";
    }
    std::cout << "The SHA1 is: " << ss.str() << std::endl;

    return 0;
}