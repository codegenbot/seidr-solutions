#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5_ctx;
    MD5Init(&md5_ctx);
    unsigned char buffer[text.size()];
    memcpy(buffer, text.c_str(), text.size());
    MD5Update(&md5_ctx, buffer, text.size());
    unsigned char md5[16];
    MD5Final(md5, &md5_ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}