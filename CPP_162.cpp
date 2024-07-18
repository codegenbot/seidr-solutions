#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal(mdctx, digest, NULL);
    EVP_MD_CTX_free(mdctx);

    char md5Hash[MD5_DIGEST_LENGTH*2+1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5Hash);
}

int contest_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}