#include "cryptopp/md5.h"

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    byte digest[16];
    md.Update((const byte*)text.c_str(), (int)text.length());
    md.Final(digest);

    stringstream ss;
    HexEncoder encoder;
    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    return ss.str();
}