#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char *p = text.c_str();
    while (*p) MD5_Update(&c, p++, 1);
    MD5_Final(md, &c);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return oss.str();
}