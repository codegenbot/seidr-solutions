#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    int maxSeenSoFar = arr.back();  
    for(int i=n-2; i>=0; i--) {  
        if(arr[i] >= maxSeenSoFar) {
            res.push_back(arr[i]);
            maxSeenSoFar = arr[i];
        }
    }
    
    std::reverse(res.begin(), res.end());
    return res;
}