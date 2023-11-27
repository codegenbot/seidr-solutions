#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(digest, &ctx);

    char md5Hash[MD5_DIGEST_LENGTH * 2];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash);
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}