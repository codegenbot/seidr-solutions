#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text){
    if(text.empty()) {
        return "None";
    }

    OpenSSL_add_all_algorithms();

    unsigned char result[MD5_DIGEST_LENGTH];
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, result, NULL);
    EVP_MD_CTX_free(mdctx);

    char md5_string[MD5_DIGEST_LENGTH*2+1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_string[i*2], "%02x", (unsigned int)result[i]);
    }
    md5_string[MD5_DIGEST_LENGTH*2] = '\0';

    return string(md5_string);
}