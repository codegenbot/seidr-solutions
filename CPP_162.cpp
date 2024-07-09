#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    size_t len = text.size();
    while (len > 0) {
        MD5_Update(&ctx, p, min(len, 64));
        p += min(len, 64);
        len -= min(len, 64);
    }
    MD5_Final(md, &ctx);

    ostringstream oss;
    for(int i = 0; i < 16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return oss.str();
}