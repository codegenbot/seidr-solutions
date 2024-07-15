#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX *mdctx;
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex (mdctx, digest, NULL);
    EVP_MD_CTX_destroy(mdctx);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0'; // Add null terminator at the end

    return mdString;
}

int main() {
    string_to_md5("password");

    return 0;
}