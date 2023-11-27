#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

void main() {
    assert(is_same(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return;
}