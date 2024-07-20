#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        std::ostringstream oss;
        oss << std::hex << setfill('0') << setw(2) << static_cast<int>(md[i]);
        result += oss.str();
    }

    return result;
}