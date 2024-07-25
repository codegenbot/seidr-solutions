#include <string>
#include <iostream>

using std::to_string;

std::string change_base(int x, int base) {
    std::string result = "";
    while(x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}