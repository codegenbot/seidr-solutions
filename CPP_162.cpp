#include <openssl/md5.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX* ctx = new MD5_CTX();
    MD5_Init(ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(ctx, ptr++, 1);
    }
    MD5_Final(md5, ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }

    delete ctx;

    return result;
}