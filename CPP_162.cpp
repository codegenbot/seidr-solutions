#include <string>
#include <algorithm>
#include <hash.h>

struct MD5_CTX {
    unsigned char iv[16];
    unsigned int counter;
};

unsigned char* MD5_Init(MD5_CTX *ctx) {
    return ctx->iv;
}

void MD5_Update(unsigned char *buf, unsigned long len, MD5_CTX *ctx) {
    // implementation here...
}

unsigned char* MD5_Final(unsigned char *buf, MD5_CTX *ctx) {
    return buf;
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update((unsigned char*)p, 1, &ctx);
        p++;
    }
    MD5_Final(md5, &ctx);

    string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.replace(i*2, 2, buf);
    }

    return result;
}