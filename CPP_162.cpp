```cpp
#include <openssl/ssl.h>

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(result, &ctx);

    stringstream ss;
    for(int i = 0; i < 16; i++) {
        if(i % 4 == 0) ss << "$";
        ss << hex << (int)result[i];
    }
    return ss.str();
}