#include <iostream>
#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    unsigned int md_len;
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    EVP_MD_CTX_free(mdctx);

    char md5hash[33];
    for (unsigned int i = 0; i < md_len; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string md5hash = string_to_md5(text);
    cout << "MD5 Hash: " << md5hash << endl;

    return 0;
}