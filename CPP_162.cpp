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

    if(text.empty())
        return "None";

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_Final(md, &ctx);

    char buf[2 * MD5_DIGEST_LENGTH + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&buf[i * 2], "%02x", md[i]);

    return string(buf);
}
