#include <iostream>
#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setw(2) << setfill('0') << static_cast<int>(md[i]);
        result += oss.str();
    }

    return result;
}