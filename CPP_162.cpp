```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char *data = text.c_str();
    size_t length = text.length();
    MD5_Update(&ctx, data, length);
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill(2) << hex << setw(2) << static_cast<int>(md5[i]);
    }

    return ss.str();
}