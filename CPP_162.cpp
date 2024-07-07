```cpp
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    unsigned char buffer[1024];
    size_t offset = 0;
    while (offset < len) {
        size_t remaining = len - offset;
        if (remaining > sizeof(buffer)) remaining = sizeof(buffer);
        memcpy(buffer, &str[offset], remaining);
        MD5_Update(&ctx, buffer, remaining);
        offset += remaining;
    }
    unsigned char result[16];
    MD5_Final(result, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}