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

    char hexString[MD5::DIGESTSIZE * 2 + 1];
    for (int i = 0; i < MD5::DIGESTSIZE; i++) {
        sprintf(&hexString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(hexString);
}