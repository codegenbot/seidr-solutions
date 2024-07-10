#include <iostream>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *ptr = text.c_str();
    int len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(buffer, &md5);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(buffer[i]);
    }

    return ss.str();
}