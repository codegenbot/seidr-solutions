#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

int main() {
    std::cout << string_to_md5("password") << std::endl;
    return 0;
}

std::string string_to_md5(std::string text) {
    EVP_MD_CTX mdctx; 
    EVP_MD_CTX_init(&mdctx);
    unsigned char md[16];
    std::string str = text;  
    size_t len = str.length();

    if (len == 0)
        return "";

    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&mdctx, str.c_str(), len);
    unsigned char mdSig[EVP_MAX_BLOCK_LENGTH];
    int len_output = EVP_DigestFinal_ex(&mdctx, mdSig, &len);
    EVP_MD_CTX_free(&mdctx);

    std::string result;
    for (int i = 0; i < len; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", mdSig[i]);
        result += buffer;
    }
    return result;
}