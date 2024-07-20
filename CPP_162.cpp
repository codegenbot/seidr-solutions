#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    EVP_MD_CTX mdctx;
    EVP_PKEY *pkey = NULL;
    const EVP_MD *md = EVP_md5();
    unsigned char md_value[EVP_MAX_BLOCK_LENGTH];

    if (!EVP_MD_CTX_init(&mdctx))
        return "";

    if (1 != EVP_DigestInit_ex(&mdctx, md, NULL))
        return "";

    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());

    if (1 != EVP_DigestFinal_ex(&mdctx, md_value, &buffer))
        return "";

    string result = "";
    for(int i = 0; i < 16; i++) {
        char c = buffer[i];
        sprintf(&result[0], "%02x", c);
    }

    EVP_MD_CTX_cleanup(&mdctx);

    return result;
}