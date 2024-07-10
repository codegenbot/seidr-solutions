#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&c, ptr, 1);
        ptr++;
    }
    MD5_Final(md, &c);
    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    return oss.str();
}