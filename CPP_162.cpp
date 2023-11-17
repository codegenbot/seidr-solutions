/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<iostream>
#include<string>
#include<openssl/md5.h>
#include<cstdio>
using namespace std;
string string_to_md5(string text){
	if(text.empty()) return "";
	unsigned char hash[MD5_DIGEST_LENGTH];
	MD5((unsigned char*)text.c_str(), text.size(), (unsigned char*)&hash);
	char buf[33];
	for(int i=0; i<16; i++)
		sprintf(buf+i*2, "%02x", hash[i]);
	buf[32]=0;
	return string(buf);
}
