```
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md_md5();
    const unsigned char *d = (const unsigned char *)text.c_str();

    EVP_DigestInit(&mdctx, md);
    EVP_DigestUpdate(&mdctx, d, text.size());
    EVP_DigestFinal(&mdctx, result, NULL);

    string hash;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        hash.append(buffer);
    }

    return hash;
}