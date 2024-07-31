#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX ctx;
    unsigned char result[16];
    const char *cstr = text.c_str();

    MD5_Init(&ctx);
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(&ctx, result);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}