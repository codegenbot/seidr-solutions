#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text){
    if (text.empty()) {
        return "None";
    }
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);
    
    char md5_string[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_string[i*2], "%02x", (unsigned int)result[i]);
    }
    md5_string[32] = '\0';
    
    return string(md5_string);
}