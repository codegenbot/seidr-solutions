```cpp
#include <string>
#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char* data = (unsigned char*)text.c_str();
    EVP_MD_CTX mdctx;
    EVP_PKEY *key = EVP_pkey_new_null();
    const EVP_MD *md = EVP_md5();
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_length;

    EVP_DigestInit(&mdctx, md);
    EVP_DigestUpdate(&mdctx, data, text.size());
    EVP_DigestFinal(&mdctx, md_value, &md_length);

    string result;
    for (int i = 0; i < md_length; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md_value[i]);
        result += buffer;
    }

    return result;
}

int main() { return 0; }