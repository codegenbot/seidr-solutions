#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int>& arr) {
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

int main() {
    assert(std::equal(sort_array({2, 4, 8, 16, 32}).begin(), sort_array({2, 4, 8, 16, 32}).end(), {2, 4, 8, 16, 32}.begin()));
    return 0;
}