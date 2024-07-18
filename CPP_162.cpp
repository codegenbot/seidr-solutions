#include <iostream>
#include <string>
#include <openssl/md5>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    EVP_DigestInit(context, EVP_md5());
    EVP_DigestUpdate(context, text.c_str(), text.length());
    EVP_DigestFinal(context, digest, NULL);
    EVP_MD_CTX_free(context);

    char md5Hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5Hash);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}