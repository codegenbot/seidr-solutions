#include <string>
#include <sstream>
#include <iomanip>
#include "cryptopp/sha.h"
#include "cryptopp/hex.h"

using namespace std;
using namespace CryptoPP;

string string_to_sha1(string text) {
    if (text.empty()) return "";

    SHA1 sha;
    byte digest[SHA1::DIGEST_SIZE];
    unsigned char* cstr = (unsigned char*)text.c_str();
    sha.Calculate((const byte*)cstr, strlen(cstr), digest);

    string result;
    for(int i = 0; i < SHA1::DIGEST_SIZE; i++) {
        result += setfill('0') << setw(2) << hex << (int)digest[i];
    }

    return result;
}