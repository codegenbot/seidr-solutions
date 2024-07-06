```cpp
#include "C:/Users/user1/Desktop/Crypto++-8.6.5-win32-msvc2017/CryptoPP/MD5.h"
#include <string>

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    byte *buf = (byte *)text.c_str();
    size_t len = text.length() + 1; 
    md.Update(buf, len);
    string result = HexEncoder().CalculateString(md.Digest());

    return result;
}