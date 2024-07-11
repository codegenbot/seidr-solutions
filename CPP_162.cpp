#include <string>
#include <algorithm>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(result, &ctx);

    std::string hashValue = "";
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        hashValue += temp;
    }
    
    return hashValue;
}