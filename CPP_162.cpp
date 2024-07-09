#include <openssl/ssl.h>
#include <openssl/sha.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* p = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5, p, len);
    MD5_Final(hash, &md5);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", hash[i]);
        result += buf;
    }
    return result;
}