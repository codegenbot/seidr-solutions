#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;
string string_to_md5(string text){
    if(text.empty())
        return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), result);
    
    std::string md5_result;
    char buf[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buf + i * 2, "%02x", result[i]);
    }
    md5_result = buf;
    
    return md5_result;
}