#include <iostream>
#include <string>
#include <cryptopp/md5.h>

using namespace std;
using namespace CryptoPP;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    byte digest[MD5::DIGESTSIZE];
    MD5().CalculateDigest(digest, (byte*)text.c_str(), text.length());

    char md5String[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}