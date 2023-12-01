#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    MD5_Update(&mdContext, text.c_str(), text.length());
    MD5_Final(digest, &mdContext);
    
    char md5string[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5string[i*2], "%02x", (unsigned int)digest[i]);
    }
    
    return md5string;
}