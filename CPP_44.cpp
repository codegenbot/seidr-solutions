
#include <iostream>
#include <string>

std::string changeBase(int x, int base) {
    std::string result;
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}