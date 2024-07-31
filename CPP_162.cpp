#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_length;
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, digest, &digest_length);
    
    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (unsigned int i = 0; i < digest_length; i++) {
        sprintf(&mdString[i * 2], "%02x", digest[i]);
    }

    return string(mdString);
}

int main() {
    cout << string_to_md5("Hello, World!") << endl;
    return 0;
}