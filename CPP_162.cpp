#include<string>
#include<openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5context;
    unsigned char result[16];
    unsigned char* ptr = &result[0];
    MD5_Init(&md5context);
    MD5_Update(&md5context, text.c_str(), text.size());
    MD5_Final(&md5context, &result[0]);
    
    string output;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", result[i]);
        output += string(buf);
    }
    
    return output;
}