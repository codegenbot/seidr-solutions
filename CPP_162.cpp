#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    if (context == NULL) return "Error";
    
    if (EVP_DigestInit_ex(context, EVP_md5(), NULL) != 1 ||
        EVP_DigestUpdate(context, text.c_str(), text.length()) != 1 ||
        EVP_DigestFinal_ex(context, digest, &digest_len) != 1) {
        EVP_MD_CTX_free(context);
        return "Error";
    }
    
    EVP_MD_CTX_free(context);
    
    char mdString[33];
    for (unsigned int i = 0; i < digest_len; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    
    return string(mdString);
}