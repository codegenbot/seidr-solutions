```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* txt = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, txt, len);
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill(2) << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}