#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string num_str = std::to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n) {
        std::reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    return num_str.substr(n - shift) + num_str.substr(0, shift);
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}