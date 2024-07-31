#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cstdint>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> custom_sort(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = std::__popcount(a);
        int countB = std::__popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

int main() {
    assert(issame(custom_sort({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}