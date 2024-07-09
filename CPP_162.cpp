#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&c, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &c);
    string md5_string;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char temp[3];
        sprintf(temp, "%02x", md5[i]);
        md5_string += temp;
    }
    return md5_string;
}