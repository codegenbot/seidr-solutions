#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX* mdctx;
    const EVP_MD* md;
    unsigned char digest[MD5_DIGEST_LENGTH];
    unsigned int digest_len;

    md = EVP_MD_md5();
    mdctx = MD5_CTX_new();
    MD5_Init(mdctx);
    MD5_Update(mdctx, text.c_str(), text.length());
    MD5_Final(digest, mdctx);
    MD5_CTX_free(mdctx);

    char md5String[33];
    for (unsigned int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i*2], "%02x", digest[i]);
    }

    return std::string(md5String);
}

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::cin >> text;

    std::string md5 = string_to_md5(text);
    std::cout << "MD5: " << md5 << std::endl;

    return 0;
}