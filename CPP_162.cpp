#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[16];
    unsigned char* md_ptr = NULL;
    EVP_MD_CTX mdctx;
    EVP_PKEY *pkey = EVP_sha1();
    const void *d = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&mdctx, pkey, 0);
    EVP_DigestUpdate(&mdctx, d, len);
    EVP_DigestFinal_ex(&mdctx, md, &len);

    string result;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += buf;
    }

    return result;
}