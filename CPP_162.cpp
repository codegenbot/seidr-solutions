#include <openssl/err.h>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX md5;
    unsigned char hash[16];
    EVP_DigestInit_ex(&md5, EVP_md5(), 0);
    EVP_DigestUpdate(&md5, str.c_str(), str.size());
    EVP_DigestFinal_ex(&md5, hash, nullptr);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return "";
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    return 0;
}