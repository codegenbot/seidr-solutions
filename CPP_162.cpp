#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& input) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.length(), result);

    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)result[i];
    }

    return ss.str();
}