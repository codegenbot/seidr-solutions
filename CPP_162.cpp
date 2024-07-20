#include<string>
#include<openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    unsigned int len = text.length();
    MD5_CTX mdContext;
    MD5Init(&mdContext);
    const char *pText = text.c_str();
    size_t i = 0;

    while (i < len) {
        size_t n = len - i;
        if (n > sizeof(buffer) / sizeof(buffer[0])) {
            n = sizeof(buffer) / sizeof(buffer[0]);
        }
        memcpy(buffer, &pText[i], n);
        MD5Update(&mdContext, buffer, n);
        i += n;
    }

    unsigned char digest[16];
    MD5Final(digest, &mdContext);

    string result;

    for (size_t i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", (int)digest[i]);
        result.append(string(buff));
    }

    return result;
}