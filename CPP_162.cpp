#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), md5);

    stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        sprintf("%02x", &md5[i]);
        ss << hex << md5[i];
    }

    return ss.str();
}