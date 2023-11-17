/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include <iostream> //cout
#include <sstream> //stringstream
#include <openssl/md5.h> //md5
#include <iomanip> //setfill, setw, hex
#include <openssl/evp.h>
#include <openssl/sha.h>

std::string string_to_md5(std::string text){
    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.length());
    MD5_Final(hash, &md5);
    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

std::string string_to_sha256(std::string text){
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, text.c_str(), text.length());
    SHA256_Final(hash, &sha256);
    std::stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++){
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main(){
    std::cout<<string_to_md5("Hello world");
    std::cout<<string_to_sha256("Hello world");
}
