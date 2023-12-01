#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    const EVP_MD *md = EVP_md5();
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());

    unsigned char digest[16];
    unsigned int digestLength;
    EVP_DigestFinal_ex(mdctx, digest, &digestLength);

    char md5String[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&md5String[i*2], "%02x", digest[i]);
    }
    md5String[32] = '\0';

    EVP_MD_CTX_free(mdctx);

    return md5String;
}