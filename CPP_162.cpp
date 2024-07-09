#include <digest.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);

    ostringstream oss;
    for(int i = 0; i < 16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    return oss.str();
}