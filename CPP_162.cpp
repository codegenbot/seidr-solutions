#include <string>
#include <iostream>
#include <md5.h>

std::string cppString_to_md5(std::string text) {
    MD5 md5;
    char buffer[33];
    md5.update(text.c_str(), text.length());
    md5.final(buffer);
    return std::string(buffer);
}