```
#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = 0;
    while (*ptr != '\0') {
        MD5_Update(&mdContext, ptr, 1);
        ptr++;
        len++;
    }
    MD5_Final(hash, &mdContext);

    std::string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result.append(buff);
    }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::string md5 = string_to_md5(text);
    std::cout << "MD5 hash: " << md5 << std::endl;
    return 0;
}