#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/hmac.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_init(&ctx);
    EVP_DigestInit_ex(&ctx, EVP_md_md5(), NULL);
    const uint8_t* ptr = reinterpret_cast<const uint8_t*>(text.c_str());
    size_t len = text.length();
    EVP_DigestUpdate(&ctx, ptr, len);
    EVP_DigestFinal_ex(&ctx, md5, &len);

    string result;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }

    return result;
}