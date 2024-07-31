#include <string>
#include <openssl/ssl.h>
#include <openssl/sha.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += buf;
    }

    return result;
}