#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(result, &md5);

    string hashValue;
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        hashValue += buff;
    }
    return hashValue;
}