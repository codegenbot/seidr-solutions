#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text){
    if(text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *p = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, p, len);
    MD5_Final(result, &ctx);

    string hash;
    for(size_t i=0; i<16; ++i){
        char c = (char)(result[i] >> 4) + ((result[i] >> 4) < 10 ? '0' : 'a'-10);
        hash += c;
        c = (char)(result[i] & 15) + ((result[i] & 15) < 10 ? '0' : 'a'-10);
        hash += c;
    }
    
    return hash;
}