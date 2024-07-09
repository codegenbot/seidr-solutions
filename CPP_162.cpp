#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX md_ctx;
    unsigned char hash[16];
    const EVP_MD *md = EVP_md5();
    const void *d = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&md_ctx, md, 0);
    EVP_DigestUpdate(&md_ctx, d, len);
    EVP_DigestFinal_ex(&md_ctx, hash, NULL);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", hash[i]);
        result += string(buf);
    }
    return result;
}