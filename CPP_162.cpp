#include <iostream>
#include <cassert>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    EVP_MD_CTX mdContext;
    EVP_DigestInit(&mdContext, EVP_md5());
    EVP_DigestUpdate(&mdContext, text.c_str(), text.length());
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    unsigned int digestLen;
    EVP_DigestFinal_ex(&mdContext, digest, &digestLen);

    char mdString[33];
    for (int i = 0; i < 16; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);

    assert(std::string(mdString) == "5f4dcc3b5aa765d61d8327deb882cf99");

    return std::string(mdString);
}