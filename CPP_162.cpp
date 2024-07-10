#include <string>
#include <openssl/ssl.h>
#include <openssl/evp.h>
#include <openssl/errqueue.h>

using namespace std;

string string_to_md5(string text) {
    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal(&ctx, md, nullptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += string(buffer);
    }

    return result;
}