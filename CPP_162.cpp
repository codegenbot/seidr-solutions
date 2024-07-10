#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    MD5_CTX mdContext;
    const char* cstr = text.c_str();
    size_t len = text.length();

    MD5_Init(&mdContext);
    MD5_Update(&mdContext, cstr, len);
    MD5_Final(buffer, &mdContext);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", buffer[i]);
        result += string(buf);
    }

    return result;
}