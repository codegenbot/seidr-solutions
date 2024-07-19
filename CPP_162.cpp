#include <openssl/ssl.h>
#define OPENSSL_API_COMPAT 0x10100
extern "C" {
    #include <openssl/md5.h>
}
#include <string>

std::string string_to_md5(const std::string& input) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_CTX md5ctx;
    MD5_Update(&md5ctx, input.c_str(), input.size());
    unsigned char* ptr = (unsigned char*)malloc(16);
    MD5_Final(ptr, &md5ctx);
    free(ptr);

    char output[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", ptr[i]);
    }
    return std::string(output);
}