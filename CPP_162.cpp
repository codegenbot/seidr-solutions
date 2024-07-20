#include <string>
#include <sstream>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md, &ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << (int)md[i];
    }

    return ss.str();
}