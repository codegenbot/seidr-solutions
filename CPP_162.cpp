#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string md5Str;
    for (int i = 0; i < 16; ++i) {
        sprintf("%02hhx", &result[i]);
        md5Str += string(1, (char)result[i]);
    }

    return md5Str;
}