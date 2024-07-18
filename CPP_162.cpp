#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    const EVP_MD* md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char md5Hash[EVP_MAX_MD_SIZE * 2 + 1];
    for (int i = 0; i < static_cast<int>(digest_len); i++) {
        sprintf(&md5Hash[i * 2], "%02x", digest[i]);
    }

    return string(md5Hash);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}