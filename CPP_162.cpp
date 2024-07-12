#include <cryptopp/include/cryptopp/sha.h>
#include <string>
#include <cryptopp/sha.h>

std::string string_to_md5(const std::string& input) {
    SHA256 sha;
    byte hash[SHA256::DIGEST_SIZE];
    sha.ComputeHash((byte*)input.c_str(), input.size(), hash);
    return stringFromHex(hash, 32);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}