#include <openssl/md5.h>
#include <string>
#include <sstream>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    unsigned char md5[16];
    MD5((unsigned char*)text.c_str(), text.size(), md5);
    std::stringstream ss;
    for(int i = 0 ; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    return ss.str();
}