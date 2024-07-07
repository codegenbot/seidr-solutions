#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX ctx;
    unsigned char md5[16];
    MD5_Init(&ctx);
    const char* str = text.c_str();
    int len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md5[i];
    }
    
    return ss.str();
}