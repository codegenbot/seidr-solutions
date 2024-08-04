#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string &text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    int md_len;
    
    md = EVP_get_digestbyname("md5");
    assert(md != NULL);

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, md_value, (unsigned int*)&md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < md_len; i++) {
        sprintf(&mdString[i * 2], "%02x", md_value[i]);
    }

    return mdString;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}