#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char input[1024];

    int len = 0;
    const char *p = text.c_str();
    while (*p && len < 1023) {
        input[len++] = *p++;
    }
    input[len] = '\0';

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, input, len);
    EVP_DigestFinal_ex(&mdctx, result, &len);

    string output;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        output += buff;
    }

    return output;
}