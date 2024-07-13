#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX c;
    MD5_Init(&c);
    const char* ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&c, ptr, len);
    MD5_Final(md5, &c);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result += string(buf);
    }
    return result;
}