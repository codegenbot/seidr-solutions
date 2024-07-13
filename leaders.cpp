```cpp
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            res.push_back(maxSoFar);
        }
    }
    
    return res;
}