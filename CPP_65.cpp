#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string s = std::to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) {
        return s;
    }
    if (shift > n) {
        std::reverse(s.begin(), s.end());
        return s;
    }
    std::string result = s.substr(n - shift) + s.substr(0, n - shift);
    return result;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}