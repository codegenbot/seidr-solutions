#include <openssl/ssl.h>
#include <openssl/sha.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(md5, &ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    
    return oss.str();
}