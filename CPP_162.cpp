```cpp
#include <iostream>
#include <string>
#include <vector>

std::string string_to_md5(std::string input) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(result, &ctx);

    std::string output;
    for (int i = 0; i < 16; i++) {
        output += sprintf(0, "%02x", result[i]);
    }
    return output;
}