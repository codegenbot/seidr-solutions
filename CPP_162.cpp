#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* t = text.c_str();
    while (*t) MD5_Update(&ctx, t, 1); // update with each character
    MD5_Final(md, &ctx);
    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
    return oss.str();
}