#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    while(len--) MD5_Update(&md5ctx, ptr++, 1);
    MD5_Final(md5, &md5ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}