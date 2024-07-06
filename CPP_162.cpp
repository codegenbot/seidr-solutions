#include <iostream>
#include <string>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    size_t len = text.size();
    while(len > 0) {
        MD5_Update(&ctx, p, len > 64 ? 64 : len);
        if(len <= 64) break;
        p += 64; len -= 64;
    }
    MD5_Final(&ctx, result);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i)
        ss << setfill(0) << setw(2) << hex << static_cast<int>(result[i]);
    
    return ss.str();
}