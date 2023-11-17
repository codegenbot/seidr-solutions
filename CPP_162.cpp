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
  
if (0 == text.size()) {
  return "None";
}

const int CHAR_SIZE = sizeof(char);
unsigned char digest[MD5_DIGEST_LENGTH];

snprintf((char*)digest,
   MD5_DIGEST_LENGTH * CHAR_SIZE,
   "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
   digest[0],
   digest[1],
   digest[2],
   digest[3],
   digest[4],
   digest[5],
   digest[6],
   digest[7],
   digest[8],
   digest[9],
   digest[10],
   digest[11],
   digest[12],
   digest[13],
   digest[14],
   digest[15]);

string hash_str((const char*)digest);
return hash_str;


    
}
