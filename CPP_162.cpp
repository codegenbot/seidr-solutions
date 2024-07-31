#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[MD5_DIGEST_LENGTH];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_init(&ctx);

    EVP_DigestInit_ex(&ctx, EVP_md5(), NULL);
    const char* ptr = text.c_str();
    size_t len = text.length();
    EVP_DigestUpdate(&ctx, ptr, len);
    EVP_DigestFinal_ex(&ctx, md, &len);
    EVP_MD_CTX_cleanup(&ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    return ss.str();
}