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

    stringstream ss;
    for (int i = 0; i < MD5::DIGESTSIZE; i++) {
        ss << hex << setw(2) << setfill('0') << (int)digest[i];
    }

    return ss.str();
}