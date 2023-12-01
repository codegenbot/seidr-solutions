#include <string>

std::string circular_shift(int x, int shift);

std::string circular_shift(int x, int shift) {
    std::string num = std::to_string(x);
    int n = num.length();
    
    if (shift > n) {
        std::reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= n;
    std::string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}