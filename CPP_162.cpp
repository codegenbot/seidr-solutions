#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    unsigned char *digest;
    int len;
    EVP_DigestFinal_ex(ctx, &md5, &len);
    EVP_MD_CTX_destroy(ctx);

    string result;
    for (int i = 0; i < len; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}