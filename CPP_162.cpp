```cpp
#include <openssl/evp.h>
#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *s = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, s, len);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += buf;
    }

    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}