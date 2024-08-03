#include <algorithm>
#include <bitset>
#include <iomanip>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    int len = text.length();

    MD5_Update(&ctx, ptr, len);

    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)(md5[i]);
    }

    return ss.str();
}