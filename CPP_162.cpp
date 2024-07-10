#include <string>
#include <openssl/ssl.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX ctx;
    const EVP_MD* md = EVP_md_md5();
    EVP_DigestInit_ex(&ctx, md, NULL);
    EVP_DigestUpdate(&ctx, (const void*)text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md5, NULL);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}