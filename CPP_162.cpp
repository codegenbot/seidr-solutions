#include <openssl/evp.h>
#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[MD5_DIGEST_LENGTH];
    EVP_MD_CTX ctx;
    EVP_MD *md5 = EVP_md5();
    unsigned char buffer[text.length()];
    for (int i = 0; i < text.length(); i++) {
        buffer[i] = text[i];
    }
    EVP_DigestInit_ex(&ctx, md5, NULL);
    EVP_DigestUpdate(&ctx, buffer, text.length());
    EVP_DigestFinal_ex(&ctx, md, &ctx);
    string str;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", (int)md[i]);
        str += buf;
    }
    return str;
}