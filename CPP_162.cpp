#include <stdio.h>
#include <string>
#include <cryptopp/md5.h>
using namespace std;

string string_to_md5(string text){
    if(text.empty()){
        return "None";
    }
    
    unsigned char digest[CryptoPP::Weak::MD5::DIGESTSIZE];
    CryptoPP::Weak::MD5 hash;
    hash.CalculateDigest(digest, (const unsigned char*)text.c_str(), text.length());
    
    char md5string[33];
    for(int i = 0; i < CryptoPP::Weak::MD5::DIGESTSIZE; i++){
        sprintf(&md5string[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    return md5string;
}