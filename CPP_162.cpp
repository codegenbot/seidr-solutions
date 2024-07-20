#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_PKEY_CTX *pctx = NULL;
    pctx = EVP_PKEY_CTX_new_id(EVP_sha1(), NULL);
    EVP_PKEY_init_key(pctx, NULL, NULL);

    EVP_DigestInit_ex(&ctx, EVP_sha1(), 0);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md5, NULL);

    string result = "";
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}