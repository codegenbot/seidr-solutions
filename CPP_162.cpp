#include <string>
#include <openssl/evp.h>
#include <openssl/hmac.h>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";

    EVP_MD_CTX md_ctx;
    EVP_PKEY *pkey = EVP_pkey_new();
    EVP_MD *md = EVP_get_md5();

    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    unsigned char md_value[EVP_MAX_MD_SIZE];
    int md_length;

    EVP_DigestFinal_ex(&md_ctx, md_value, &md_length);

    string result = "";
    for(int i=0; i<md_length; ++i) {
        char buff[3];
        sprintf(buff, "%02x", (unsigned char)md_value[i]);
        result.append(buff);
    }

    EVP_PKEY_free(pkey);
    EVP_MD_CTX_destroy(&md_ctx);

    return result;
}