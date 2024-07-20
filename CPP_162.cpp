#include <string>
#include <sstream>
#include <iomanip>
#include <digest.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md, &ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)md[i];
    }

    return ss.str();
}