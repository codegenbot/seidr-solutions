#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* str = text.c_str();
    size_t length = text.length();
    MD5_Update(&md5, str, length);
    MD5_Final(hash, &md5);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result += buff;
    }

    return result;
}