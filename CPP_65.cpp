#include <iostream>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string num_str = std::to_string(x);
    int n = num_str.size();
    shift = shift % n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n / 2) {
        std::reverse(num_str.begin(), num_str.end());
    } else {
        std::rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    }
    return num_str;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    // Add more test cases if needed
    return 0;
}