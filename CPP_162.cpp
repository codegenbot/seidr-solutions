#include <iostream>
#include <string>
#include <iomanip>
#include <cryptopp/md5.h>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5Context ctx;
    MD5Update((const unsigned char*)text.c_str(), text.length());
    MD5Final(&ctx, md);

    string result;
    for (int i = 0; i < 16; ++i) {
        stringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    return result;
}