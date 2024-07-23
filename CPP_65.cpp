#include <iostream>
#include <string>

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    return str.substr(shift % str.length()) + str.substr(0, shift % str.length());
}