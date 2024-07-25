#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return __builtin_popcount(a) < __builtin_popcount(b) || (__builtin_popcount(a) == __builtin_popcount(b) && a < b);
    });
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    std::vector<int> temp_arr = {2, 4, 8, 16, 32};
    sort_array(temp_arr);
    assert(issame(temp_arr, arr));
    for (int num : temp_arr) {
        std::cout << num << " ";
    }

    return 0;
}