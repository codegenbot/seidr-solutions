#include <iostream>
#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string md5Str;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5Str += buff;
    }

    return md5Str;
}