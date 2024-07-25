#include <iostream>
#include <vector>
#include <algorithm>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return __builtin_popcount(a) < __builtin_popcount(b) || (__builtin_popcount(a) == __builtin_popcount(b) && a < b);
    });
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    sort_array(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}