```cpp
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) MD5_Update(&ctx, p, 1);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result += sprintf(0, "%02x", md[i]);

    return result;
}