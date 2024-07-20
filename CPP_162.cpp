#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(tohex((unsigned char)md[i]));

    return result;
}

string tohex(unsigned int x) {
    static const char* hexDigits = "0123456789abcdef";
    unsigned int mask = 0xf;
    string res;

    for (int i = 3; i >= 0; --i, mask >>= 4) {
        res.push_back(hexDigits[(x & mask) >> ((3 - i) * 4)]);
    }

    return res;
}