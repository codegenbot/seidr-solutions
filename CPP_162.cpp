#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX md_ctx;
    unsigned char output[EVP_MAX_MD_SIZE];
    size_t output_len;

    EVP_MD_CTX_init(&md_ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        EVP_UPDATE(&md_ctx, (const unsigned char*)ptr, 1);
        ptr++;
    }
    output = EVP_Finalize(&md_ctx, &output_len);

    string result;
    for (int i = 0; i < output_len; i++) {
        char buff[3];
        sprintf(buff, "%02x", output[i]);
        result += buff;
    }

    return result;
}