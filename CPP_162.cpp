#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    MD5_Update(&ctx, str, text.size());
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
    }

    return ss.str();
}