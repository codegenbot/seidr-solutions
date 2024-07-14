#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n-1; i++) {  
        if(arr[i] >= arr[i+1]) {
            res.push_back(arr[i]);
        }
    }
    
    res.push_back(arr.back());
    return res;
}

int main() {
    return 0;
}