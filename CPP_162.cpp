#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_sha1(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, md5, NULL);
    EVP_MD_CTX_free(ctx);

    stringstream ss;
    for(int i = 0 ; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return ss.str();
}