#include <openssl/evp.h>
#include <cassert>
#include <string>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, input.c_str(), input.length());

    unsigned char md[MD5_DIGEST_LENGTH];
    unsigned int mdLen;
    EVP_DigestFinal_ex(ctx, md, &mdLen);

    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)md[i]);
    }

    return std::string(mdString);
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}