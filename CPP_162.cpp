#include <openssl/ssl.h>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>

std::ostringstream ss;

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX* md5;
    unsigned char hash[16];
    OpenSSL_add_all_algorithms();
    if (!(md5 = EVP_MD_CTX_new())) return ""; // error case

    if (1 != EVP_DigestInit_ex(md5, EVP_md5(), 0)) return ""; // error case
    if (1 != EVP_DigestUpdate(md5, str.c_str(), str.size())) return ""; // error case
    unsigned char* md5out = NULL;
    size_t outlen;
    if (1 != EVP_DigestFinal_ex(md5, hash, &outlen)) return ""; // error case

    ss << std::hex;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(hash[i]);
    }

    EVP_MD_CTX_free(md5);

    return ss.str();
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    return 0;
}