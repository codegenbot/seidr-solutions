#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/evp.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[EVP_MAX_MD_SIZE];

    EVP_DigestUpdate(&md, (unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_CTX(&md, result, NULL);

    stringstream ss;
    for(int i = 0; i < EVP_MD_SIZE(EVP_md5()); i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}