#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len = 0;
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(context, EVP_md5(), NULL);
    EVP_DigestUpdate(context, text.c_str(), text.length());
    EVP_DigestFinal_ex(context, digest, &digest_len);
    EVP_MD_CTX_free(context);

    char mdString[33];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main_MD5() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}