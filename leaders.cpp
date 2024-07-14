#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> leftLeaders, rightLeaders;
    
    for(int i=0; i<n-1; i++) {  
        if(i == 0 || arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) leftLeaders.push_back(arr[i]);
    }
    
    for(int i=n-1; i>=1; i--) {
        if(i == n-1 || arr[i] >= arr[i-1]) rightLeaders.push_back(arr[i]);
    }
    
    std::vector<int> res;
    for(int num : leftLeaders) {
        if(std::find(rightLeaders.begin(), rightLeaders.end(), num) != rightLeaders.end()) {
            res.push_back(num);
        }
    }
    
    return res;
}

int main() {
    std::vector<int> input = {19};
    std::vector<int> output = leaders(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}