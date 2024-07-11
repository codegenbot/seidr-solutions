#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
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

    string output;
    for (int i = 0; i < 16; i++) {
        ostringstream buffer;
        buffer << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
        output += buffer.str();
    }

    return output;
}