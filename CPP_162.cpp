#include <string>
#include <algorithm>
#include <openssl/evp.h>
#include <sstream>
#include <cassert>

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX mdctx;
    unsigned char hash[16];
    EVP_SignInit(&mdctx, EVP_sha1());
    EVP_SignUpdate(&mdctx, str.c_str(), str.size());
    EVP_SignFinal(&mdctx, hash, sizeof(hash), nullptr);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::hex << std::fill << std::setw(2) << (int)hash[i];
    }

    return ss.str();
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    return 0;
}