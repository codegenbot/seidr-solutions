```
#include <string>
#include <sstream>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX md5ctx;
    unsigned char result[16];
    stringstream ss;
    const char* cstr = text.c_str();
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, cstr, text.length());
    MD5_Final(&md5ctx, result);

    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}