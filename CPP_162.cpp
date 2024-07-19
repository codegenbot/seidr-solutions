#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX md_ctx;
    unsigned char output[EVP_MAX_MD_SIZE];
    size_t output_len;

    EVP_MD_CTX_init(&md_ctx);

    const unsigned char* ptr = (const unsigned char*)text.c_str();
    size_t len = text.length();

    int64_t result = EVP_UPDATE(&md_ctx, &ptr, len);

    unsigned char* final_result = EVP_Final(&md_ctx, &output_len);
    string md5;
    for (int i = 0; i < output_len; i++) {
        char buff[3];
        sprintf(buff, "%02x", final_result[i]);
        md5 += buff;
    }

    return md5;
}