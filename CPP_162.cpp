```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.length());
    MD5_Final(md5, &ctx);

    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md5[i]);
    }

    return oss.str();
}