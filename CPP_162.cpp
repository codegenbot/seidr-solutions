#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    EVP_MD_CTX* md_context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(md_context, EVP_md5(), NULL);
    EVP_DigestUpdate(md_context, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_length;
    EVP_DigestFinal_ex(md_context, digest, &digest_length);

    EVP_MD_CTX_free(md_context);

    char mdString[33];
    for(int i = 0; i < digest_length; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0'; // Add null terminator at the end

    return mdString;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}