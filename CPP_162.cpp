#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    unsigned int len = 0;
    MD5_CTX c;
    EVP_MD_CTX ctx;
    const EVP_MD* md = EVP_md5();
    unsigned char result[16];

    // initialize the context
    EVP_MD_CTX_init(&ctx);

    if (!EVP_DigestInit_ex(&ctx, md, NULL))
        return "";

    // update the context with the message
    EVP_DigestUpdate(&ctx, text.c_str(), text.length());

    // finalization of the context
    EVP_DigestFinal_ex(&ctx, result, &len);

    string res = "";
    for (int i = 0; i < len; ++i)
        sprintf(res.c_str() + strlen(res.c_str()), "%02x", result[i]);

    return res;
}