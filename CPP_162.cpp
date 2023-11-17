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
	int len = text.size();
	char * data = new char[len+1];
	strcpy(data,text.c_str());
	unsigned char hash[MD5_DIGEST_LENGTH];
	MD5_CTX context;
	MD5_Init(&context);
	MD5_Update(&context,data,strlen(data));
	MD5_Final(hash,&context);
	char * result = new char[MD5_DIGEST_LENGTH*2+1];
	for (int i=0;i<MD5_DIGEST_LENGTH;++i)
	{
		sprintf(&result[i*2],"%02x",(unsigned int)hash[i]);
	}
	string res(result);
	delete data;
	delete result;
	return res;
}
int main()
{
	string s;
	while(cin>>s)
		cout<<string_to_md5(s)<<endl;
	return 0;
}
