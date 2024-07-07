#include <string>
#include <iostream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return ss.str();
}