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
        return NULL;
    unsigned char md[16];
    char tmp[3]={'\0'},buf[33]={'\0'};
    MD5((const unsigned char*)text.c_str(), text.size(), md);
    for(int i=0;i<16;i++){
        sprintf(tmp,"%2.2x",md[i]);
        strcat(buf,tmp);
    }
    return string(buf);
}
