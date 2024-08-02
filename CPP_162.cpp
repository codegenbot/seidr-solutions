#include <string>
#include <algorithm>
#include <iomanip>
#include <md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char mdBuffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p++, 1);
    }
    MD5_Final(mdBuffer, &ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)mdBuffer[i];
    }

    return oss.str();
}