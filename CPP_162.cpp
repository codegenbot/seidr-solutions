#include <iostream>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX ctx;
    unsigned char md_value[16];
    stringstream ss;

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md_value, &ctx);

    for (int i = 0; i < 16; ++i) {
        sprintf/ss.set("%02x", md_value[i]);
    }

    return ss.str();
}