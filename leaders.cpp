#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;
    
    int maxRight = arr[n - 1];
    result.push_back(maxRight);

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }

    return result;
}