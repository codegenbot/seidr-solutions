#include <cassert>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& str) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)str.c_str(), str.size(), result);

    std::string hash;
    char buffer[3];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(buffer, "%02x", result[i]);
        hash += buffer;
    }

    return hash;
}

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}