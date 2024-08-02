#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}