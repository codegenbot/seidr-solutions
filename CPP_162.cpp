#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal(&ctx, md, nullptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<int>(md[i]);
        result += oss.str();
    }

    return result;
}