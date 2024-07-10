#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(&ctx, result);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
    }

    return ss.str();
}