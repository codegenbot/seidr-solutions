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
  {
    int length = text.length();
    if (length <1)
    {
      return "None";
    }
   
    unsigned char result[16];
    char encoding[33];
    int i;
    MD5((const unsigned char *) text.c_str(), length, result);
 
    for (i = 0; i < 16; i++)
    {
      sprintf(&(encoding[i * 2]), "%02x", result[i]);
    }
    string s = encoding;
    return s;  
  }
