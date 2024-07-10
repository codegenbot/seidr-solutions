#include <openssl/evp.h>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>

std::stringstream ss;

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX* md5 = EVP_MD_CTX_new();
    unsigned char hash[16];
    EVP_DigestInit_ex(md5, EVP_md_null(), NULL);
    EVP_DigestUpdate(md5, str.c_str(), str.size());
    EVP_DigestFinal_ex(md5, hash, NULL);

    ss << std::hex << std::setfill('0');
    for (int i = 0; i < 16; ++i) {
        ss << std::setw(2) << (int)hash[i];
    }

    return ss.str();

}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    return 0;
}