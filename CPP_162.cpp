#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), (unsigned char*)&digest);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);

    return string(mdString);
}