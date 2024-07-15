#include <openssl/evp.h>
#include <string>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    char mdString[33];
    int n;
    
    OpenSSL_add_all_algorithms();
    md = EVP_get_digestbyname("md5");
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    unsigned char digest[EVP_MD_size(md)];
    EVP_DigestFinal_ex(mdctx, (unsigned char*)digest, (unsigned int*)&n);
    EVP_MD_CTX_destroy(mdctx);

    for(int i = 0; i < EVP_MD_size(md); i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}