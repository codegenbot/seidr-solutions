#include <string>
#include <algorithm>
#include <openssl/md5.h>
#include <sstream>

std::string string_to_md5(const std::string& str) {
    MD5_CTX md5;
    unsigned char hash[16];
    MD5_Init(&md5);
    MD5_Update(&md5, str.c_str(), str.size());
    MD5_Final(hash, &md5);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::hex << std::setfill('0') << (int)hash[i];
    }

    return ss.str();
}

int main_test() {
    assert(string_to_md5("password") == "5d41402abc4de22fbc1fc7ce2a607762");
    return 0;
}