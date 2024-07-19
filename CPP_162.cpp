#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX md_ctx;
    unsigned char output[EVP_MAX_MD_SIZE];
    size_t output_len = 0;

    EVP_MD_CTX_init(&md_ctx);
    
    const uint8_t* ptr = reinterpret_cast<const uint8_t*>(text.c_str());
    size_t len = text.size();

    EVP_UPDATE(&md_ctx, ptr, len);

    EVP_Finalize(&md_ctx, output, &output_len);

    string result;
    for (int i = 0; i < output_len; i++) {
        char buff[3];
        sprintf(buff, "%02x", output[i]);
        result += buff;
    }

    return result;
}