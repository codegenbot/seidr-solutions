#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
        result += ss.str();
    }

    return result;
}