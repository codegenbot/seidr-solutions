#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md5[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return ss.str();
}