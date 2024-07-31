```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md5[i];
    }

    return ss.str();
}