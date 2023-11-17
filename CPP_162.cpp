/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<string>
#include<cstring>
#include<openssl/md5.h>
using namespace std;
string string_to_md5(string text){
    if(text.empty()) return NULL;
    MD5_CTX ctx;
    string md5_str;
    unsigned char md[16] = {0};
    char tmp[33] = {0};
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);
    for(int i = 0; i < 16; ++i) {
        memset(tmp, 0x00, sizeof(tmp));
        sprintf(tmp, "%02X", md[i]);
        md5_str += tmp;
    }
    return md5_str.c_str();
}
