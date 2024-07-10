#include <cryptopp/md5.h>
#include <string>
#include <sstream>

std::string cppString_to_md5(std::string text) {
    CryptoPP::MD5 hash;
    unsigned char result[CryptoPP::MD5::DIGEST_SIZE];
    hash.Update((const byte*)text.c_str(), text.size());
    hash.Final(result);
    std::stringstream ss;
    for (int i = 0; i < CryptoPP::MD5::DIGEST_SIZE; i++) {
        ss << std::hex << (int)result[i];
    }
    return ss.str();