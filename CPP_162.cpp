#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(buffer, &ctx);

    string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)buffer[i];
        output += ss.str();
    }
    return output;
}