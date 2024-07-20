#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX ctx;
    unsigned char result[16];

    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(result, &ctx);

    stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << (int)result[i];
    }

    return ss.str();
}