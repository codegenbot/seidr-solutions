#include <string>
#include <algorithm>

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
    std::reverse(str.begin(), str.end());
    std::reverse(str.begin(), str.begin() + shift);
    std::reverse(str.begin() + shift, str.end());
    return str;
}