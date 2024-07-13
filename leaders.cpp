#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n; i++) {
        if(i == n-1 || arr[i] >= arr.back()) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}