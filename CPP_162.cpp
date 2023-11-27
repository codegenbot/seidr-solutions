#include <iostream>
#include <string>
#include <array>


std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX md5Context;
    MD5_Init(&md5Context);
    MD5_Update(&md5Context, text.c_str(), text.length());
    MD5_Final(digest, &md5Context);

    std::array<char, 33> md5Hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash.data(), md5Hash.size());
}

int solve() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string md5Hash = string_to_md5(text);
    std::cout << md5Hash << std::endl;

    return 0;
}

int main() {
    solve();
    return 0;
}