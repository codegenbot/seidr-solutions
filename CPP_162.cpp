```
#include <sstream>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char md5[16];

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(md5, &md5ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int) md5[i];
    }

    return ss.str();
}