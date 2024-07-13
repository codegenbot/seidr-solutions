```cpp
#include <algorithm>
#include <cctype>
#include <string>

std::string string_to_md5(const std::string& text) {
    MD5_CTX md5context;
    unsigned char result[16];
    MD5Init(&md5context);
    if (text.empty()) {
        return "";
    }
    MD5Update(&md5context, (const unsigned char*)text.c_str(), text.length());
    MD5Final(result, &md5context);

    std::string output;
    for(int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }

    return output;
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
}