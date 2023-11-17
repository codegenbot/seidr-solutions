/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<string.h>
#include<openssl/md5.h> //to install openssl, run sudo apt-get install libssl-dev
#include <iostream>
#include <cassert>
using namespace std;
#include <cstdio>
#include <cstdlib>
#include <cstring>

string string_to_md5(string text){
    if(text.length() == 0){
        return "";
    }
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.length());
    MD5_Final(result, &md5);
    char *mdString = (char *)malloc(33); //33 for the null terminator
    for(int i = 0; i < 16; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)result[i]);
    return mdString;
}
int main(){
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99"); //password
    assert (string_to_md5("") == ""); //empty string
    return 0;
}
