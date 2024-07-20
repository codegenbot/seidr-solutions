#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    const EVP_MD *evp_md;
    EVP_MD_CTX ctx;
    unsigned char input[1024];

    int i = 0;
    for (const auto& c : text) {
        input[i++] = (unsigned char)c;
    }
    input[i] = '\0';

    evp_md = EVP_get_md5();
    EVP_DigestInit_ex(&ctx, evp_md, NULL);
    EVP_DigestUpdate(&ctx, input, i);
    EVP_DigestFinal_ex(&ctx, md, NULL);

    string result;
    for (const auto& c : (string)md) {
        char buf[3];
        sprintf(buf, "%02x", c);
        result += string(buf);
    }

    return result;
}