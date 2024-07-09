#include <string>
#include <sstream>
#include <openssl/md5.h>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md[16];

    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}