#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char digest[MD5_DIGEST_LENGTH];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);

    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

// Example usage
string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99";