#include <algorithm>
#include <iostream>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *p = text.c_str();
    while (*p) {
        MD5_Update(&md5, p, 1);
        p++;
    }
    MD5_Final(result, &md5);

    std::string hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        hash.append(buff);
    }

    return hash;
}