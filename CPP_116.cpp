#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool isEqual(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_arr = a;
    std::sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return sorted_arr == b;
}

int main() {
    std::vector<int> expected = {2, 4, 8, 16, 32};
    assert(isEqual(sort_array({2, 4, 8, 16, 32}), expected));
    return 0;
}