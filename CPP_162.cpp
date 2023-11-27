#include <iostream>
#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, nullptr);
    EVP_DigestUpdate(mdctx, reinterpret_cast<const unsigned char *>(text.c_str()), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char md5hash[33] = {};
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&md5hash[i * 2], "%02x", digest[i]);
    }

    return string(md5hash);
}

int main() {
    string text;
    getline(cin, text);
    cout << string_to_md5(text) << endl;
    return 0;
}