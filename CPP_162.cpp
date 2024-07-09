#include <string>
#include <iostream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) MD5_Update(&ctx, ptr++, 1);
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    
    return ss.str();
}