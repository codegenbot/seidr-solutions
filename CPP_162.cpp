#include <iostream>
#include <string>
#include <cryptopp/sha1.h>

std::string string_to_md5(const std::string& s) {
    CryptoPP::SHA1 sha;
    unsigned char md5[16];
    sha.Calculate(s, (int)s.size(), md5);
    std::string result;
    for (int i = 0; i < 16; ++i)
        result.push_back(((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) ? ((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) : "0");
    return result;
}