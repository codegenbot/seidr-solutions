#include <iostream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX c;
    MD5_Init(&c);
    const char* ptr = text.c_str();
    int len = text.size();
    while(len > 0) {
        MD5_Update(&c, ptr, min(len, 64));
        len -= 64;
        ptr += 64;
    }
    MD5_Final(md5, &c);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}