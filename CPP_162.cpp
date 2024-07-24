```cpp
#include <string>
#include <sstream>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(md5, &ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::hex << setfill('0') << setw(2) << static_cast<int>(md5[i]);
    }
    return ss.str();
}