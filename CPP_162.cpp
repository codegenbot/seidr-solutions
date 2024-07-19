#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    EVP_MD_CTX_init(&ctx);
    const char* ptr = text.c_str();
    size_t len = strlen(ptr);
    while (*ptr) {
        int64_t bytes = 1;
        EVP_UPDATE(&ctx, (const unsigned char*)ptr, bytes);
        ptr++;
    }
    unsigned char *result = EVP_FINAIlize(&ctx, nullptr);

    string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        output += buff;
    }

    return output;
}