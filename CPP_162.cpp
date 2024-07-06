```cpp
#include <iostream>
#include <string>
#include <iomanip>
#include "../../../path/to/cryptopp/include/cryptopp/md5.h"
#include "../../../path/to/cryptopp/include/cryptopp/sha3.h"

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5 md;
    md.Update((const unsigned char*)text.c_str(), text.length());
    string result = hexEncode(md.Digest());

    return result;
}

string hexEncode(const CryptoPP::byte* data, int length) {
    string str;
    for(int i=0; i<length; i++) {
        str += setfill('0') << setw(2) << hex << (int)data[i];
    }
    return str;