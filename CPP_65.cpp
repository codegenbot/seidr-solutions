#include <iostream>
#include <string>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    int n = str.length();
    if (shift > n) {
        return str;
    } else {
        std::string shifted = str.substr(n - shift) + str.substr(0, n - shift);
        return shifted;
    }
}

int main() {
    assert(circular_shift(11, 101) == "11");
}