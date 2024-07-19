#include <iostream>
#include <cassert>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    assert(!text.empty());

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_Final(result, &ctx);

    char md5String[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)result[i]);
    }

    return std::string(md5String);
}

int main() {
    std::string text;
    std::cin >> text;

    std::string md5 = string_to_md5(text);
    std::cout << md5;

    return 0;
}