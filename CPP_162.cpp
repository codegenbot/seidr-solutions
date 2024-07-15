#include <iostream>
#include <cassert>
#include <string>
#include <openssl/md5.h>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    std::ostringstream oss;
    for(int i = 0; i < 16; i++) {
        oss << std::hex << static_cast<unsigned int>(digest[i]);
    }

    return oss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}