#include <iostream>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX mdContext;
    unsigned char result[16];
    
    if(text.empty()) {
        return "";
    }
    
    MD5_Init(&mdContext);
    MD5_Update(&mdContext, text.c_str(), text.length());
    MD5_Final(&mdContext, result);

    stringstream ss;
    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return ss.str();
}