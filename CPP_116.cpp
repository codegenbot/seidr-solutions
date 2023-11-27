#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return sorted_arr;
}

int main() {
    assert(std::equal(sort_array({2, 4, 8, 16, 32}).begin(), sort_array({2, 4, 8, 16, 32}).end(), {2, 4, 8, 16, 32}.begin()));
    return 0;
}