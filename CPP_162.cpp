#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char* ptr = (unsigned char*)malloc(16);
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, input.c_str(), input.size());
    MD5_Final(ptr, &md5ctx);
    free(ptr);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", ptr[i]);
    }
    return std::string(output);
}