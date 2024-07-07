#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

int hex_key(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (std::isxdigit(std::toupper(c))) { 
            result++;
        }
    }
    return result;

}