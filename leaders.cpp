#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    
    // The rightmost element is always a leader.
    result.push_back(arr.back());
    
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] >= arr[n - 1]) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}