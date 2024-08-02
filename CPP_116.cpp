#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <numeric>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = std::bitset<sizeof(int) * CHAR_BIT>(a).count();
        int count_b = std::bitset<sizeof(int) * CHAR_BIT>(b).count();
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}