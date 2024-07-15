#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* mdContext = EVP_MD_CTX_new();
    EVP_DigestInit(mdContext, EVP_md5());
    EVP_DigestUpdate(mdContext, text.c_str(), text.size());
    EVP_DigestFinal_ex(mdContext, digest, NULL);
    EVP_MD_CTX_free(mdContext);

    char mdString[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0';

    return mdString;
}

int main() {
    std::cout << string_to_md5("password") << std::endl;

    return 0;
}