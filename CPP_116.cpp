#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

void sort_array(const std::vector<int>& arr) {
    std::vector<int> temp = arr;
    std::sort(temp.begin(), temp.end(), [](int a, int b) {
        return __builtin_popcount(a) < __builtin_popcount(b) || (__builtin_popcount(a) == __builtin_popcount(b) && a < b);
    });
    assert(issame(temp, arr));
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    sort_array(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}