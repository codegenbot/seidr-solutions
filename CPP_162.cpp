#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdValue[16];
    MD5_Init(&ctx);
    const char *ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(mdValue, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)mdValue[i];
    }

    return ss.str();
}