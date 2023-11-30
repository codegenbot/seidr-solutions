#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char md5String[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)result[i]);
    }

    return md5String;
}