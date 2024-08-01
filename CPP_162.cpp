#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char *d = NULL;
    size_t len = 0;

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, result, &len);

    string output;
    for (int i = 0; i < len; ++i) {
        char c = static_cast<char>(result[i]);
        output += c;
    }

    return output;
}