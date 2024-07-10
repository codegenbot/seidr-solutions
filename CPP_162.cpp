#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char result[16];
    string md5str;

    if (text.empty()) {
        return "";
    }

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(result, &ctx);

    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", result[i]);
        md5str += string(buf);
    }

    return md5str;
}