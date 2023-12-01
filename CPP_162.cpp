#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[EVP_MAX_MD_SIZE];
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    int md_len;
    
    // Initialize the MD5 context
    mdctx = EVP_MD_CTX_new();
    EVP_MD_CTX_init(mdctx);
    md = EVP_md5();
    
    // Update the MD5 context with the input text
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    
    // Convert the digest to string representation
    char md5string[33];
    for (int i = 0; i < md_len; i++) {
        sprintf(&md5string[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    // Cleanup and return the MD5 string
    EVP_MD_CTX_free(mdctx);
    return md5string;
}