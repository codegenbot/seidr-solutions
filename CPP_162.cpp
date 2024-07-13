#include <iostream>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const unsigned char *p = (const unsigned char *)text.c_str();
    size_t len = text.size();
    while(len > 0) {
        MD5_Update(&md5, p, len);
        break; // only update once
    }
    MD5_Final(result, &md5);
    
    std::stringstream ss;
    for (int i = 0; i < 16; ++i)
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)result[i];
    
    return ss.str();
}