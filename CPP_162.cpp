#include <iostream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    std::string strMD5;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char c = (char)result[i];
        sprintf("%02x", &c);
        strMD5.append(&c, 1);
    }

    return strMD5;
}