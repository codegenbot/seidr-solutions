#include <iostream>
#include <string>
using std::__cxx11::to_string;

std::string change_base(int x, int base) {
    std::string result;
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}