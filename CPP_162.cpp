#include <openssl/evp.h>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < md_len; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)md_value[i]);

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}