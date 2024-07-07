#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char buffer[1024];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&mdContext, p, strlen(p));
        p += strlen(p);
    }
    MD5_Final(buffer, &mdContext);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", buffer[i]);
        result.append(buff);
    }

    return result;
}