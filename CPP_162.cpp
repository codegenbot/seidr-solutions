#include <string>
#include <algorithm>
#include <cctype>
#include <openssl/md5.h>

std::string myString_to_md5(std::string text) {
    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);
    std::string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    return output;
}