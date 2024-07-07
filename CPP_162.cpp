#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char *d = (unsigned char *)text.c_str();
    size_t n = text.size();
    int r;

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, d, n);
    EVP_DigestFinal_ex(&mdctx, md5, &r);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}