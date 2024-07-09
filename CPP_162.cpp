#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[MD5_DIGEST_LENGTH];

    EVP_DigestInit_ex(&md, EVP_md5(), NULL);
    EVP_DigestUpdate(&md, text.c_str(), text.size());
    unsigned char* md5 = (unsigned char*)malloc(MD5_DIGEST_LENGTH);
    EVP_DigestFinal_CTX(&md, md5, NULL);
    string output;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        output += setfill('0') << setw(2) << hex << std::setw(2) << std::setfill('0') << (int)md5[i];
    }
    free(md5);
    return output;
}