#include <string>
#include <algorithm>
#include <hash.h>

struct MD5_CTX {
    unsigned int bytes[4];
};

unsigned int MD5_Init(MD5_CTX *ctx) {
    // your code here...
}

void MD5_Update(MD5_CTX *ctx, const char *inbuf, unsigned int inlen) {
    // your code here...
}

void MD5_Final(unsigned char *mdigest, MD5_CTX *context) {
    // your code here...
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
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