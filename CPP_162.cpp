```cpp
#include <iostream>
#include <string>
#include <sstream>
#include "md5.h"

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5 md5;
    unsigned char hash[16];
    md5.update((unsigned char*)text.c_str(), text.size());
    md5.final(hash);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << hex << setfill('0') << setw(2) << (int)hash[i];
    }

    return oss.str();
}