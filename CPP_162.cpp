#include <algorithm>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    const char* str = text.c_str();
    MD5_Update(&ctx, str, text.size());
    MD5_Final(result, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << (int)result[i];
    }
    return ss.str();
}