#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX md5;
    MD5_Init(&md5);
    const char* str = text.c_str();
    size_t len = text.length();
    unsigned char buffer[1024];
    size_t remaining = len;

    while (remaining > 0) {
        size_t bytes_to_copy = min(remaining, sizeof(buffer));
        memcpy(buffer, &str[len - remaining], bytes_to_copy);
        MD5_Update(&md5, buffer, bytes_to_copy);
        remaining -= bytes_to_copy;
    }

    unsigned char result[16];
    MD5_Final(result, &md5);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}