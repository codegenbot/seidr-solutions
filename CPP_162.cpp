#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = text.c_str();
    MD5_Update(&md5, cstr, text.size());
    MD5_Final(result, &md5);

    string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }

    return output;
}