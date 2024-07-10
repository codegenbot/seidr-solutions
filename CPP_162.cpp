#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_get_md5();
    unsigned char md_value[MD_DIGEST_LENGTH];

    if (!EVP_DigestInit_ex(&mdctx, md, NULL)) {
        // Handle error
    }

    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    if (!EVP_DigestUpdate(&mdctx, input, len)) {
        // Handle error
    }

    unsigned char *out = md_value;
    size_t outlen = MD_DIGEST_LENGTH;

    if (!EVP_DigestFinal_ex(&mdctx, out, &outlen)) {
        // Handle error
    }

    string result;
    for (int i = 0; i < MD_DIGEST_LENGTH; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md_value[i]);
        result += buffer;
    }

    EVP_MD_CTX_free(&mdctx);

    return result;
}