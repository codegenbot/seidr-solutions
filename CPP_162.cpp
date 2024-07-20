```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* data = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, data, len);
    MD5_Final(md, &ctx);

    stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << static_cast<int>(md[i]);
    }
    return ss.str();
}