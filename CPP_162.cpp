Here is the completed code:

```cpp
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) MD5_Update(&mdContext, ptr, 1);
    MD5_Final(result, &mdContext);

    ostringa oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    return oss.str();
}