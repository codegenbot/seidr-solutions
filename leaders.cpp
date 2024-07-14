#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    int maxR = arr.back();
    for(int i=n-1; i>=0; i--) {  
        if(arr[i] >= maxR) res.push_back(arr[i]);
        maxR = arr[i];
    }
    
    return res;
}