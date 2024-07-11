```
#include <algorithm>
#include <string>
#include <md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    std::string output;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }

    return output;
}