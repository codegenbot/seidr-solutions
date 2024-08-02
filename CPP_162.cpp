#include <iostream>
#include <sstream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&mdContext, ptr++, 1);
    }
    MD5_Final(result, &mdContext);

    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(result[i]);
    }

    return oss.str();
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5 hash of the input string is: " << string_to_md5(text) << std::endl;
    return 0;
}