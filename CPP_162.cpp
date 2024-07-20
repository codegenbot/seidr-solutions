#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.size(), md5);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return oss.str();
}