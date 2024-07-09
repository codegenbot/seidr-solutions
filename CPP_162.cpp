#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5Context;
    MD5_Init(&md5Context);
    const char* textCstr = text.c_str();
    size_t textSize = text.size();
    MD5_Update(&md5Context, textCstr, textSize);
    MD5_Final(result, &md5Context);

    string hexResult;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        hexResult += string(buffer);
    }
    return hexResult;
}