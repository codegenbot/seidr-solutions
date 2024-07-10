```cpp
#include <string>
#include <openssl/ssl.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_sha1();
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, input, len);
    EVP_DigestFinal_ex(&mdctx, md5, NULL);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}