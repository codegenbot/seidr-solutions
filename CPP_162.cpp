```cpp
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <cassert>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(md5, &ctx);

    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        output.push_back((char) md5[i]);
    }

    return output;
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4b2ffeaaco71a900a068c");
    return 0;
}