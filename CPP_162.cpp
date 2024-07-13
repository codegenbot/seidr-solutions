#include <string>
#include <openssl/md5.h>

using namespace std;

#define MD5_IMPLEMENTED

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string output;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", result[i]);
        output += string(buf);
    }

    return output;
}