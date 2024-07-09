#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[MD5_DIGEST_LENGTH];

    EVP_DigestUpdate(&md, (unsigned char*)text.c_str(), text.size());
    unsigned char *digest = (unsigned char *)OPENSSL_malloc(MD5_DIGEST_LENGTH);
    EVP_DigestFinal_CTX(&md, digest, NULL);

    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    OPENSSL_free(digest); 

    return ss.str();
}