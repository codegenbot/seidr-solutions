#include <iostream>
#include <sstream>
#include <openssl/sha.h>
#include <iomanip>

std::string string_to_sha1(std::string text){
	unsigned char hash[SHA_DIGEST_LENGTH];
	SHA_CTX sha1;
	SHA1_Init(&sha1);
	SHA1_Update(&sha1, text.c_str(), text.size());
	SHA1_Final(hash, &sha1);
	std::stringstream ss;
	for(int i = 0; i < SHA_DIGEST_LENGTH; i++){
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
	}
	return ss.str();
}

int main(){
	std::cout<<string_to_sha1("Hello world");
}
