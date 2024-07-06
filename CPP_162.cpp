#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md[16];
    string result;
    MD5Update(&ctx, (unsigned char*)text.c_str(), text.size());
    MD5Final(&ctx, md);

    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    return result;
}