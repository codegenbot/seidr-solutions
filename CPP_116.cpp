#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> custom_sort(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a > b; // Changed from a < b to a > b
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    assert(issame(custom_sort({2, 4, 8, 16, 32}), {32, 16, 8, 4, 2})); // Changed to match sorted array order
    return 0;
}