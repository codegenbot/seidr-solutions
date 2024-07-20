```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    size_t len = text.size();
    while(len > 0) {
        MD5_Update(&ctx, ptr, len);
        len -= sizeof(char)*1024;
        if(len <= 0) break;
        ptr += sizeof(char)*1024;
    }
    MD5_Final(md,&ctx);

    std::string result;
    for(int i=0; i<16; ++i){
        char c = (md[i] >> 4) & 15;
        result.push_back((c < 10)? c+'0' : c-10 + 'a');
        c = md[i] & 15;
        result.push_back((c < 10)? c+'0' : c-10 + 'a');
    }
    
    return result;
}