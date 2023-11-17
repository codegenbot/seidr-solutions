/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<openssl/md5.h>
#include<stdlib.h>

std::string string_to_md5(std::string text){
    if(strlen(text.c_str()) == 0){
        return "None";
    }
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.length());
    MD5_Final(result, &md5);
    char *mdString = (char *)malloc(33); 
    for(int i = 0; i < 16; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)result[i]);
    return mdString;
}

int main(){
    std::cout << string_to_md5("Hello world");
    return 0;
}
