#include <iostream>
#include <string>

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    if (shift > str.size()) {
        return std::string(str.rbegin(), str.rend());
    } else {
        return str.substr(shift) + str.substr(0, shift);
    }
}