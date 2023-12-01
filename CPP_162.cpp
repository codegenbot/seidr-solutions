#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "cryptopp/md5.h"

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    CryptoPP::byte digest[CryptoPP::MD5::DIGESTSIZE];
    CryptoPP::MD5().CalculateDigest(digest, reinterpret_cast<const CryptoPP::byte*>(text.data()), text.length());

    std::ostringstream oss;
    oss << std::hex << std::setfill('0');
    for (int i = 0; i < CryptoPP::MD5::DIGESTSIZE; i++) {
        oss << std::setw(2) << static_cast<unsigned int>(digest[i]);
    }

    return oss.str();
}