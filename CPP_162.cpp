#include <openssl/ssl.h>
extern "C" {
    #include <openssl/md5.h>
}

std::string string_to_md5(const std::string& input) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(result, &ctx);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return std::string(output);
}