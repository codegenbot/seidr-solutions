#include <iostream>
#include <string>
#include <cryptopp/sha.h>

std::string string_to_md5(const std::string& s) {
    CryptoPP::SHA1 sha;
    unsigned char md5[16];
    sha.Calculate((const byte*)s.c_str(), (int)s.size(), md5);
    return bytesToHexString(md5, 20);
}

std::string bytesToHexString(unsigned char* input, int length) {
    std::string output;
    for(int i = 0; i < length; i++) {
        output += (std::hex << std::setfill('0') << std::setw(2) << (int)input[i]).str();
    }
    return output;
}