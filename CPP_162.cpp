#include <string>

extern "C" {
    #include <openssl/md5.h>
}

std::string string_to_md5(const std::string& input) {
    unsigned char result[16];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, input.c_str(), input.size());
    MD5_Final(result, &md5ctx);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return std::string(output);