/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include <iostream>
#include <sstream>
#include <openssl/md5.h>
#include <iomanip>
#include <openssl/evp.h>

std::string string_to_md5(std::string text){
	EVP_MD_CTX *mdctx;
	const EVP_MD *md;
	unsigned char md_value[EVP_MAX_MD_SIZE];
	unsigned int md_len;
	md = EVP_get_digestbyname("MD5");
	mdctx = EVP_MD_CTX_new();
	EVP_DigestInit_ex(mdctx, md, NULL);
	EVP_DigestUpdate(mdctx, text.c_str(), text.size());
	EVP_DigestFinal_ex(mdctx, md_value, &md_len);
	EVP_MD_CTX_free(mdctx);
	std::stringstream ss; 
	for(int i = 0; i < md_len; i++){
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)md_value[i]; 
	}
	return ss.str();
}
