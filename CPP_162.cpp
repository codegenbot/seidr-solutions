/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;
string string_to_md5(string text){
    if(text.length()==0) return NULL;

    MD5_CTX ctx;
    unsigned char md[16];
    string mdString;

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(md, &ctx);

    for(int i = 0; i < 16; i++)
        mdString += static_cast<char>(md[i]);

    return mdString;
}
