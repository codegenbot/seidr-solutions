#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    
    // The rightmost element is always a leader.
    if (n == 0) return result;
    result.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}