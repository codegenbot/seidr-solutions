#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= arr.back()) 
            res.push_back(arr[i]);
        else
            break;
    }
    
    return res;
}