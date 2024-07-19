#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& input) {
    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD_CTX_init(&mdctx);
    EVP_Update(&mdctx, input.c_str(), input.size());
    EVP_Finalize(&mdctx, result);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return std::string(output);
}