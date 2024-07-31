Here is the completed code:

```cpp
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX mdc;
    MD5_Init(&mdc);
    const char *ptr = text.c_str();
    while (*ptr) MD5_Update(&mdc, ptr, 1);
    MD5_Final(md5, &mdc);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }
    return result;
}