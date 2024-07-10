#include <string>
#include <cryptopp/sha.h>

std::string myString_to_md5(std::string text) {
    SHA256 sha;
    byte hash[SHA256::DIGEST_SIZE];
    string result;

    sha.ComputeHash((const byte*)text.c_str(), text.size(), hash);
    for (int i = 0; i < SHA256::DIGEST_SIZE; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        result += buffer;
    }

    return result;
}