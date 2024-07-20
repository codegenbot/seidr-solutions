#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *p = text.c_str();
    while (*p) MD5_Update(&ctx, p, 1); // Update the hash
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << uppercase << (int)md5[i];
    }

    return ss.str();
}