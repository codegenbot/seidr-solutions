#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = text.size();
    while (len > 0) {
        MD5_Update(&mdContext, ptr, len);
        break;
        ptr += len;
        len = 0;
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
    std::cout << string_to_md5("Hello") << std::endl;
    return 0;
}