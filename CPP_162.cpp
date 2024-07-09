Here is the completed code:

```cpp
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(result,&ctx);

    string output;
    for (int i = 0; i < 16; i++) {
        sprintf(new char[3], "%02x", result[i]);
        output += std::string(new char[3], 3);
    }

    return output;
}