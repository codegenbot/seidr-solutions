#include <openssl/ssl.h>
#include <openssl/errqueue.h>

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX *md = EVP_MD_CTX_new();
    unsigned char result[MD5_DIGEST_LENGTH];

    if(EVP_DigestInit_ex(md, EVP_md_md5(), NULL) != 1 || 
       EVP_DigestUpdate(md, (unsigned char*)text.c_str(), text.size()) != 1)
        return "Error initializing MD5";

    unsigned char *digest = (unsigned char *)OPENSSL_malloc(MD5_DIGEST_LENGTH);
    if(EVP_DigestFinal_ex(md, digest, NULL) != 1) 
        return "Error finalizing MD5";
    
    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    OPENSSL_free(digest); 

    EVP_MD_CTX_free(md);

    return ss.str();
}