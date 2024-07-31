#include <iostream>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string str = std::to_string(x);
    int n = str.size();
    shift %= n;
    if (shift == 0) {
        return str;
    }
    if (shift > n) {
        std::reverse(str.begin(), str.end());
        return str;
    }
    std::string shifted = str.substr(n - shift) + str.substr(0, n - shift);
    return shifted;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}