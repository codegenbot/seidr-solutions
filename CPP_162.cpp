#include <iostream>
#include <sstream>
#include <digest.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5ctx;
    unsigned char result[16];
    stringstream ss;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(result,&md5ctx);

    for(int i = 0; i < 16; i++) {
        sprintf(buffer,"%02x",result[i]);
        ss << buffer;
    }

    return ss.str();
}