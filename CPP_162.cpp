#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *t = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, t, len);
    MD5_Final(md, &ctx);

    string out;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << static_cast<int>(md[i]);
        out.append(ss.str());
    }
    return out;
}