#include <iostream>
#include <openssl/md5.h>
#include <string>
#include <cstring>

std::string string_to_md5(const std::string &input) {
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_Final(result, &ctx);

    char md5_string[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5_string[i * 2], "%02x", (unsigned int)result[i]);
    }
    md5_string[MD5_DIGEST_LENGTH * 2] = '\0';

    return std::string(md5_string);
}

int main() {
    std::string input = "password";
    std::string md5_hash = string_to_md5(input);
    std::string expected_md5_hash = "5f4dcc3b5aa765d61d8327deb882cf99";

    assert(md5_hash == expected_md5_hash);

    return 0;
}