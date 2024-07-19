```cpp
#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(std::string input) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(result, &ctx);

    std::string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }

    return output;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}