#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[16];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* txt = text.c_str();
    size_t len = text.size();
    unsigned char buf[1024];

    for (size_t i = 0; i < len; i += 1024) {
        size_t remaining = min(len - i, 1024);
        memcpy(buf, &txt[i], remaining);
        MD5_Update(&md5ctx, buf, remaining);
    }

    MD5_Final(md5, &md5ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    return oss.str();
}