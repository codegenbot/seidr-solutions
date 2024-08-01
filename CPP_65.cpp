#include <string>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string s = std::to_string(x);
    int n = s.size();
    shift %= n;
    return (shift == 0) ? s : s.substr(n - shift) + s.substr(0, n - shift);
}