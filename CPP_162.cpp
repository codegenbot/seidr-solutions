```cpp
#include <digest.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char *p = reinterpret_cast<const unsigned char *>(text.c_str());
    MD5_Update(&ctx, p, text.size());
    MD5_Final(result, &ctx);
    string output;
    for (int i = 0; i < 16; ++i) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
        output += ss.str();
    }
    return output;
}