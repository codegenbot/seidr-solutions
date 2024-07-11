#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    const EVP_MD* md = EVP_md5();
    unsigned char result[MD5_DIGEST_LENGTH];
    EVP_MD_CTX ctx;
    EVP_MDDigestInit_ex(&ctx, md, NULL);
    EVP_MDDigestUpdate(&ctx, text.c_str(), text.length());
    EVP_MDDigestFinal_ex(&ctx, result, NULL);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << setw(2) << std::setprecision(2) << (int)result[i];
    }

    return ss.str();
}