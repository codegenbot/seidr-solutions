#include <cassert>
#include <algorithm>
#include <string>

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
    std::reverse(s.begin(), s.end());
    std::reverse(s.begin(), s.begin() + shift);
    std::reverse(s.begin() + shift, s.end());
    return s;
}