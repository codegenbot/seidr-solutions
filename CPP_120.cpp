#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    return std::vector<int>(arr.rbegin(), arr.rbegin() + k);
}