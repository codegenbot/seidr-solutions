```
#include <string>
#include <sstream>
#include "cryptopp/md5.h"
#include "cryptopp/hex.h"

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    md.Update((const byte*)text.c_str(), (int)text.length());
    stringstream ss;
    HexEncoder e;
    ss << e.Convert(md.Digest(), true);
    return ss.str();
}