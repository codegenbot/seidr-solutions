```
#include <stdio.h>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_Final(md, &ctx);
    string result = "";
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        result += to_string(md[i]);
    }
    return result;
}
```