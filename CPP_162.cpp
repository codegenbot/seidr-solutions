#include <iostream>
#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }
    
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_Final(result, &ctx);

    char md5String[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)result[i]);
    }

    return string(md5String);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}