#include <openssl/evp.h>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>

std::ostringstream ss;

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX* md5;
    unsigned char hash[16];
    md5 = EVP_MD_CTX_new();
    OpenSSL_add_all_algorithms();
    EVP_DigestInit_ex(md5, EVP_md5(), 0);
    EVP_DigestUpdate(md5, str.c_str(), str.size());
    EVP_DigestFinal_ex(md5, hash, nullptr);

    ss << std::hex;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(hash[i]);
    }

    return ss.str();
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    OpenSSL_add_all_algorithms();
    return 0;
}