```
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char *ptr = reinterpret_cast<const unsigned char *>(text.c_str());
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        sprintf(result + strlen(result), "%02x", md[i]);
    }
    return result;
}