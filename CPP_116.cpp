#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        return (count_a == count_b) ? a < b : count_a < count_b;
    });
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    sort_array(arr);
    assert(issame(arr, {2, 4, 8, 16, 32}));
    
    return 0;
}