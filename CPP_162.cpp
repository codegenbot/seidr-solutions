```cpp
#include <algorithm>
#include <iomanip>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *p = text.c_str();
    while (*p) {
        MD5_Update(&md5, p, 1);
        p++;
    }
    MD5_Final(&md5, result);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}