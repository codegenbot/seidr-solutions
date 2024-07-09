#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <crypto/md5.h>

std::string string_to_md5(const std::string& text) {
    crypto::MD5 md5;
    char hash[33];
    md5.update(text.data(), text.size());
    md5.finalize();
    for(int i = 0; i < 16; i++){
        std::stringstream ss;
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)(md5.hex()[i*2]+0x100&0xff);
        if(i == 3 || i == 5 || i == 7 || i == 11 || i == 13)
            ss << '-';
        std::string temp = ss.str();
        hash[i * 2] = (char)(md5.hex()[i*2]+0x100&0xff);
        hash[(i*2)+1] = (char)(md5.hex()[(i*2)+1]+0x100&0xff);
    }
    return std::string(hash, 32);
}