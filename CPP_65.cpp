#include <string>
#include <algorithm>

std::string circular_shift(int x, int shift) {
    std::string num = std::to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        std::reverse(num.begin(), num.end());
        return num;
    }
    return num.substr(n - shift) + num.substr(0, n - shift);
}