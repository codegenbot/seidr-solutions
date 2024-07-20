#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    MD5_CTX ctx;
    unsigned char hash[16];
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(hash, &ctx);
    stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)hash[i];
    }
    return ss.str();
}