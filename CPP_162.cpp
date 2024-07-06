```cpp
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}