#include <iostream>
#include <string>
#include <digest/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5((unsigned const char*)text.c_str(), text.size(), hash);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << setw(2) << (int)hash[i];
    }

    return ss.str();
}