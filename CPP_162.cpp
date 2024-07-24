#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cryptopp/sha.h>

std::string string_to_md5(const std::string& str);

int main() {
    std::stringstream ss;
    ss << str;
    return ss.str();
}

std::string string_to_md5(const std::string& str) {
    SHA256 sha;
    byte hash[SHA256::DIGEST_SIZE];
    sha.ComputeString(str.c_str(), str.length());
    char result[65];
    for (int i = 0; i < 32; ++i)
        sprintf(result + 2 * i, "%02x", hash[i]);
    return std::string(result);
}