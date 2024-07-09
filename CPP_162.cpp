#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/errqueue.h>

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX *md = EVP_MD_CTX_new();
    unsigned char result[MD5_DIGEST_LENGTH];

    if (!EVP_DigestInit_ex(md, EVP_md5(), NULL))
        return "Error initializing MD context";
    
    if (!EVP_DigestUpdate(md, (unsigned char*)text.c_str(), text.size()))
        return "Error updating MD context";

    unsigned char *digest = (unsigned char *)OPENSSL_malloc(MD5_DIGEST_LENGTH);
    int len;
    if (!EVP_DigestFinal_ex(md, digest, &len))
        return "Error finalizing MD context";
    
    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    OPENSSL_free(digest); 
    EVP_MD_CTX_free(md);

    return ss.str();
}