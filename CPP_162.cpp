Here is the completed code:

```cpp
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    MD5_Init(&ctx);

    const char* str = text.c_str();
    size_t len = text.length();

    MD5_Update(&ctx, str, len);
    MD5_Final(mdBuffer, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", mdBuffer[i]);
        result += buff;
    }

    return result;
}