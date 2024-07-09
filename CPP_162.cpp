#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    uint32_t digest[4];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(&ctx, md5);
    
    string result;
    for(int i = 0; i < 4; ++i){
        stringstream ss;
        ss << hex << setfill('0') << setw(8) << ((uint32_t*)&md5)[i];
        result += ss.str();
    }
    
    return result;
}

#include "digest.h"
#include "include/md5.h"