#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    
    for (int i = 0; i < k; i++) {
        auto it = *std::max_element(arr.begin(), arr.end());
        result.push_back(it);
        auto newEnd = remove_if(arr.begin(), arr.end(), [it](int x) { return x == it; });
        arr.erase(newEnd, arr.end());
    }
    
    return result;
}