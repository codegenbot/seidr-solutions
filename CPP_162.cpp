#include <openssl/evp.h>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    unsigned char result[16];
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());
    unsigned int len;
    EVP_DigestFinal_ex(ctx, result, &len);

    // Convert the bytes to hexadecimal
    char output[33];
    for (int i = 0; i < len; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return std::string(output);
}