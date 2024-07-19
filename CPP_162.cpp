#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());

    EVP_DigestUpdate(mdctx, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    EVP_DigestFinal(mdctx, digest, &digest_len);

    std::stringstream ss;
    for (unsigned int i = 0; i < digest_len; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    }

    EVP_MD_CTX_free(mdctx);

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}