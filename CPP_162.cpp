#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

using namespace std;

string string_to_md5(const string &text) {
    if(text.empty()){
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();

    EVP_DigestInit(mdctx, md);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);

    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    string input_text;
    cin >> input_text;
    cout << string_to_md5(input_text) << endl;
    return 0;
}