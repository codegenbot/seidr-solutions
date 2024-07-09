#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char *p = text.c_str();
    while (*p) {
        MD5_Update(&md5ctx, p, 1);
        p++;
    }
    MD5_Final(result, &md5ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }

    return ss.str();
}