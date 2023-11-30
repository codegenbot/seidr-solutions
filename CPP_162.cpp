#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length(), digest);

    std::string md5Hash;
    char hexBuffer[3];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(hexBuffer, "%02x", digest[i]);
        md5Hash += hexBuffer;
    }

    return md5Hash;
}

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::cout << string_to_md5(text) << std::endl;

    return 0;
}