#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX mdContext;
    MD5Init(&mdContext);
    MD5Update(&mdContext, reinterpret_cast<const unsigned char*>(text.c_str()), text.size());
    MD5Final(result, &mdContext);

    string output;
    for (int i = 0; i < 16; ++i) {
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }
    return output;
}