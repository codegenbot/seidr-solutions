/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include <iostream>
#include <sstream>
#include <openssl/md5.h> //openssl-devel; sudo apt-get install libssl-dev
#include <iomanip>
#include <openssl/evp.h>

std::string string_to_md5(std::string text){
	unsigned char hash[MD5_DIGEST_LENGTH];
	EVP_MD_CTX *mdctx;
	mdctx = EVP_MD_CTX_new();
	EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
	EVP_DigestUpdate(mdctx, text.c_str(), text.size());
	EVP_DigestFinal_ex(mdctx, hash, NULL);
	EVP_MD_CTX_free(mdctx);
	std::stringstream ss; 
	for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i]; 
	}
	return ss.str();
}
