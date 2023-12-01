#include <iostream>
#include <string>
#include <cryptopp/md5.h>

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    CryptoPP::byte digest[MD5::DIGESTSIZE];
    CryptoPP::MD5().CalculateDigest(digest, (CryptoPP::byte*)text.c_str(), text.length());

    char md5String[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}