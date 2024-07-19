```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5ctx, ptr++, 1);
    }
    MD5_Final(buffer, &(md5ctx));

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        oss << setfill('0') << setw(2) << hex << (int)buffer[i];

    return oss.str();
}