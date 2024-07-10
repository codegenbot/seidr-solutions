#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.length());
    MD5_Final(buffer, &md5);

    string result = "";
    for(int i=0; i<16; ++i)
        sprintf(result + "%02x", buffer[i]);
    
    return result;
}