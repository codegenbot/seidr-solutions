/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<openssl/md5.h> 

string_to_md5(string text)
{
	unsigned char hash[MD5_DIGEST_LENGTH];
	MD5_CTX md5;
	MD5_Init(&md5);
	MD5_Update(&md5, text.c_str(), text.size());
	MD5_Final(hash, &md5);
	stringstream ss; 
	for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
	{
		ss << hex << setw(2) << setfill('0') << (int)hash[i]; 
	}
	return ss.str();
}
