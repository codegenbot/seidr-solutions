#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md5, &ctx);

    ostringstream oss;
    for(int i=0; i<16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}