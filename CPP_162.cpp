#include <iostream>
#include <string>
#include <iomanip>
#include "cryptopp/sha.h"
#include "cryptopp/hex.h"

using namespace std;
using namespace CryptoPP;

string string_to_sha(string text) {
    if (text.empty()) return "";

    SHA sha;
    byte digest[SHA::DigestSize()];
    sha.Update((const byte*)text.c_str(), text.length());
    sha.Final(digest);

    string result = HexEncoder().Encode(digest, SHA::DigestSize());

    return result;
}