#include <string>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string num = std::to_string(x);
    int n = num.length();
    shift = shift % n;

    if (shift == 0) {
        return num;
    } else if (shift > n) {
        std::reverse(num.begin(), num.end());
        return num;
    } else {
        std::string shifted = num.substr(n - shift) + num.substr(0, n - shift);
        return shifted;
    }
}