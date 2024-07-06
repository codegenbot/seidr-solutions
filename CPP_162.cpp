#include "cryptopp/include/md5.h"
#include <string>

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    byte *buf = (byte *)text.c_str();
    size_t len = text.length() + 1; // need +1 for null-terminator
    md.Update(buf, len);
    string result = HexEncoder().CalculateString(md.Digest());

    return result;
}