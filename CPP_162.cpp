```cpp
#include <string>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    while(len > 0) {
        MD5_Update(&ctx, ptr, min(len, 64));
        len -= 64;
        ptr += 64;
    }
    MD5_Final(buffer, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)buffer[i];
    }

    return ss.str();
}