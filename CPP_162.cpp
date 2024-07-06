#include <iostream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    CryptoPP::MD5 md;
    byte *buf = (byte *)text.c_str();
    size_t len = text.length() + 1; 
    md.Update(buf, (int)len);
    string result = CryptoPP::HexEncoder().CalculateString(md.Digest());

    return result;
}