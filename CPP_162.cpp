```cpp
#include "path_to_your_installation/CryptoPP/CryptoPP.a"

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    md.Update((const byte*)text.c_str(), (int)text.length());
    string result = HexEncoder().CalculateString(md.Digest());

    return result;
}