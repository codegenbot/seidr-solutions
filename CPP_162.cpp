#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string &text) {
    if(text.empty()){
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned int md_len;
    unsigned char md_value[EVP_MAX_MD_SIZE];

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < md_len; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)md_value[i]);
    }

    return mdString;
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}