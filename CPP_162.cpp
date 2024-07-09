#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(md, &ctx);

    string out;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        stringstream ss;
        ss << hex << setw(2) << setfill('0') << (int)md[i];
        out += ss.str();
    }
    
    return out;
}