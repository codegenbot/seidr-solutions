#include <iostream>
#include <iomanip>
#include <digest/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md[16];

    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setw(2) << setfill('0') << hex << (int)md[i];
    }

    return ss.str();
}