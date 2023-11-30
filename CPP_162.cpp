#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;

string string_to_md5(string text){
    unsigned char digest[MD5_DIGEST_LENGTH];
    string result;
    
    if(text.empty()){
        return "None";
    }
    
    MD5((const unsigned char*)text.c_str(), text.length(), digest);
    char buffer[3];
    
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buffer, "%02x", digest[i]);
        result += buffer;
    }
    
    return result;
}