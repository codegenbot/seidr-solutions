#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* t = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, t, len);
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    
    return ss.str();
}