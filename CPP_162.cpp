```cpp
#include <iostream>
#include <sstream>
#include <iomanip>
#include <digest/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) 
        return "";

    MD5_CTX ctx;
    unsigned char result[16];
    md5_init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    md5_update(&ctx, ptr, len);
    md5_final(result, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)result[i];
    }

    return ss.str();
}