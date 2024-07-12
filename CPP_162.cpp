```cpp
#include <iostream>
#include <string>
#include <openssl/md5.h>

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}

std::string string_to_md5(const std::string& input) {
    unsigned char buffer[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    MD5_Update(&mdContext, input.c_str(), input.size());
    MD5_Final(buffer, &mdContext);

    std::string output;
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", buffer[i]);
        output += temp;
    }

    return output;
}