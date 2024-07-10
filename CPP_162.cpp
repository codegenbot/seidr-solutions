#include <string>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    MD5_CTX md5Context;
    unsigned char hash[16];
    unsigned char* p = hash;

    MD5_Init(&md5Context);
    MD5_Update(&md5Context, text.c_str(), text.size());
    MD5_Final(&md5Context, &hash);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        if(i<4||i>7) ss << hex << setfill('0') << setw(2) << (int)hash[i];
    }
    
    return ss.str();
}