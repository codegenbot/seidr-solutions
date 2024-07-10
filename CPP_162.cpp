#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);
    ostringa md5str;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        md5str.append(ss.str());
    }
    return string(md5str.str());
}