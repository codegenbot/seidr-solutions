#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_vector(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);
        if (ones_a == ones_b) return a < b;
        return ones_a < ones_b;
    });
    return arr;
}