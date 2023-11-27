#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_Digest((unsigned char*)text.c_str(), text.length(), digest, NULL, EVP_md5(), NULL);
    
    string md5Hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        md5Hash += to_string(digest[i]);
    }
    
    return md5Hash;
}