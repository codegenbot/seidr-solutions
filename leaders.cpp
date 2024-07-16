#include <vector>

std::vector<int> calculateLeaders(std::vector<int> arr) {
    int n = arr.size();
    std::vector<int> res;
    
    int maxSoFar = 0; 

    for(int i=n-1; i>=0; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}