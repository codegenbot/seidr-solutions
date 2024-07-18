#include <iostream>
#include <string>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    return str.substr(n - shift) + str.substr(0, n - shift);
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}