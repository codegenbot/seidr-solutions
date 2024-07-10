#include <openssl/evp.h>
#include <openssl/md5.h>
#include <string>
#include <iostream>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);

    std::string md5_hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        md5_hash += char(hash[i]);
    }

    return md5_hash;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    std::cout << "MD5 hash test passed!" << std::endl;

    return 0;
}