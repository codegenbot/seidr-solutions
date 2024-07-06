#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5_ctx;
    unsigned char result[16];

    MD5_Init(&md5_ctx);
    MD5_Update(&md5_ctx, text.c_str(), text.length());
    MD5_Final(&md5_ctx, result);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}