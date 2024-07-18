#include <iostream>
#include <string>
#include <openssl/md5>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    std::string expected_hash = "5f4dcc3b5aa765d61d8327deb882cf99";
    std::string input = "password";

    std::string result = string_to_md5(input);

    std::cout << "Result: " << result << std::endl;
    assert(result == expected_hash);

    return 0;
}