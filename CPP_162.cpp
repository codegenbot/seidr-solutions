#include <string>
#include <openssl/evp.h>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& text);

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, NULL);
    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for(int i = 0; i < EVP_MD_size(md); i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    }

    return ss.str();
}