#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    string result = "";
    EVP_MD_CTX ctx;
    EVP_PKEY *pkey = EVP_pkey_new();
    EVP_PKEY_set1_RSA(pkey, RSA_generate_key_ex(1024, RSA_F4, NULL, NULL));
    EVP_DigestInit_ex(&ctx, EVP_md5(), 0);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md5, nullptr);
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", md5[i]);
        result += temp;
    }
    EVP_PKEY_free(pkey);
    return result;
}