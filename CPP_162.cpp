#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[16];

    EVP_DigestInit_ex(&md, EVP_md5(), NULL);
    EVP_DigestUpdate(&md, (unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_ex(&md, result, NULL);

    stringstream ss;
    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}