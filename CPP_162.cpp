#include <stdio.h>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    
    md = EVP_md5(); // get the MD5 message digest
    mdctx = EVP_MD_CTX_new(); // create a new MD context
    EVP_DigestInit_ex(mdctx, md, NULL); // initialize the context with the chosen digest algorithm
    EVP_DigestUpdate(mdctx, text.c_str(), text.length()); // update the context with the input data
    EVP_DigestFinal_ex(mdctx, digest, NULL); // finalize the context and obtain the digest
    
    EVP_MD_CTX_free(mdctx); // free the MD context
    
    char md5String[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    return string(md5String);
}