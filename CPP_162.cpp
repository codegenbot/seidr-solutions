/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <openssl/md5.h>
#include <cassert>
using namespace std;

string string_to_md5(string text){
    if(text.length() == 0)
    {
        return "NULL";
    }
    // unsigned char result[MD5_DIGEST_LENGTH];
    // MD5_CTX md5;
    // MD5_Init(&md5);
    // MD5_Update(&md5, text.c_str(), text.length());
    // MD5_Final(result, &md5);
    // string mdString;
    // for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
    // {
    //     mdString += to_string((int)result[i]);
    // }
    // return mdString;
}
// int main()
// {
//     assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
//     assert (string_to_md5("") == "NULL");
//     return 0;
// }
