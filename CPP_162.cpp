#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), (unsigned char*)&digest);
    
    char md5_string[33];
    for(int i = 0; i < 16; ++i)
        sprintf(&md5_string[i*2], "%02x", (unsigned int)digest[i]);
    
    return string(md5_string);
}

int main() {
    cout << (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99") << endl;
    return 0;
}