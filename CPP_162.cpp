#include <cryptopp/md5.h>
#include <string>

std::string cppString_to_md5(std::string text) {
    CryptoPP::MD5 hash;
    unsigned char result[CryptoPP::MD5::DIGEST_SIZE];
    CryptoPP::byte* textBytes = (CryptoPP::byte*)text.c_str();
    hash.Update(textBytes, text.size());
    hash.Final(result);
    std::string output;
    for (int i = 0; i < CryptoPP::MD5::DIGEST_SIZE; i++) {
        output += std::to_string((int)result[i]);
    }
    return output;