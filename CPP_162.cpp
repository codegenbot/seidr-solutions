```
#include <iostream>
#include <string>
#include <iomanip>
#include <cryptopp/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.length();
    MD5Context ctx;
    MD5Init(&ctx);
    MD5Update(&ctx, data, len);
    MD5Final(&ctx, md);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    return result;
}