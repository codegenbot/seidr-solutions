#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char hash[MD5_DIGEST_LENGTH];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char *d = nullptr;

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, md, nullptr);

    d = text.c_str();
    while (*d) {
        EVP_DigestUpdate(&mdctx, d++, strlen(d));
    }

    EVP_DigestFinal_ex(&mdctx, hash, nullptr);
    EVP_MD_CTX_cleanup(&mdctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)hash[i];
    }

    return ss.str();
}