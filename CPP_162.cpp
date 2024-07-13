```cpp
#include <iostream>
#include <string>

std::string string_to_md5(const std::string& text) {
    MD5_CTX md5context;
    unsigned char result[16];
    MD5Init(&md5context);
    if(text.empty()) {
        return "";
    }
    MD5Update(&md5context, (const unsigned char*)text.c_str(), text.length());
    MD5Final(result, &md5context);

    std::string buffer = "";
    for(int i = 0; i < 16; i++) {
        sprintf(&buffer, "%02x", result[i]);
    }
    return buffer;
}

int main() {
    std::cout << string_to_md5("Hello World") << std::endl;
    return 0;
}