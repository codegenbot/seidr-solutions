#include <algorithm>
#include <sstream>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdValue[16];
    unsigned char* ptr = &mdValue[0];

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(&ctx, mdValue);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)mdValue[i];
    }

    return oss.str();
}