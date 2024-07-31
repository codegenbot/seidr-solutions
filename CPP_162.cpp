```
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = text.size();
    while (len > 0) {
        MD5_Update(&mdContext, ptr, len);
        break;
        ptr += len;
        len = 0;
    }
    MD5_Final(hash, &mdContext);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result.append(buff);
    }

    return result;
}