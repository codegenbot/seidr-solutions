#include <openssl/evp.h>
#include <string>
#include <cassert>

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    const EVP_MD *md;
    EVP_MD_CTX *mdctx;
    char mdString[33];
    unsigned char digest[MD5_DIGEST_LENGTH];
    int n;

    OpenSSL_add_all_algorithms();
    md = EVP_get_digestbyname("md5");
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &n);
    EVP_MD_CTX_destroy(mdctx);

    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
}