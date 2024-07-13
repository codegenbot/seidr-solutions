#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.length());
    MD5_Final(result, &ctx);

    string md5Hash;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5Hash += buff;
    }

    return md5Hash;
}