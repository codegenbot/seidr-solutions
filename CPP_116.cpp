#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);
        if (ones_a == ones_b) return a < b;
        return ones_a < ones_b;
    });
    return arr;
}

int main() {
    assert(sort_array({2,4,8,16,32}) == ({2, 4, 8, 16, 32}));
    return 0;
}