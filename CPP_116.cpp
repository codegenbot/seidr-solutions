#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

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

bool issame(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    return arr1 == arr2;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    
    return 0;
}