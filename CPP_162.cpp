#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text){
   if(text.empty())
      return "None";

   unsigned char result[MD5_DIGEST_LENGTH];
   MD5((unsigned char*)text.c_str(), text.length(), result);

   char hash[MD5_DIGEST_LENGTH * 2 + 1];
   for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
      sprintf(&hash[i * 2], "%02x", (unsigned int)result[i]);

   return string(hash);
}