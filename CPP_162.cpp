#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(buffer, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << (int)buffer[i];
    }

    return ss.str();
}