#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5Init(&ctx);
    const char *str = text.c_str();
    size_t len = strlen(str);
    unsigned char data[len+1];
    memcpy(data, str, len);
    data[len] = '\0';
    MD5Update(&ctx, data, len);
    MD5Final(md5, &ctx);
    
    stringstream ss;
    for(int i=0; i<16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    
    return ss.str();
}