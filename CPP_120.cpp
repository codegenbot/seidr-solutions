#include <vector>

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> result;
    std::partial_sort(arr.begin(), arr.begin() + k, arr.end(), std::greater<int>());
    for (int i = 0; i < k; ++i) {
        result.push_back(arr[i]);
    }
    return result;
}