```cpp
#include <iostream>
#include <string>
#include "md5.h"

std::string string_to_md5(const std::string& input) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5(input.c_str(), input.length(), md5);
    std::string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(tohex(md5[i]));
    return result;
}

std::string tohex(unsigned int num) {
    char buff[3];
    sprintf(buff, "%02x", num);
    return std::string(buff);
}

int main() {
    std::string md5_hash = string_to_md5("password");
    assert(md5_hash == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}