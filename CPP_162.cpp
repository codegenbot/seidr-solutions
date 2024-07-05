#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) return "None";

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_length = 0;

    EVP_MD_CTX* context = EVP_MD_CTX_new();
    const EVP_MD* md = EVP_md5();

    EVP_DigestInit_ex(context, md, nullptr);
    EVP_DigestUpdate(context, text.c_str(), text.size());
    EVP_DigestFinal_ex(context, digest, &digest_length);
    EVP_MD_CTX_free(context);

    char md5_string[33];
    for(unsigned int i = 0; i < digest_length; ++i)
        sprintf(&md5_string[i*2], "%02x", (unsigned int)digest[i]);

    return string(md5_string);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    cout << "All tests passed!" << endl;
    return 0;
}