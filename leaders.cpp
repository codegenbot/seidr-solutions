#include <vector>
#include <initializer_list>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i = 0; i < n; i++) {
        int maxRightSoFar = arr[n-i-1]; 
        if(i == n - 1 || arr[i] >= maxRightSoFar) { 
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 2};
    std::vector<int> result = leaders(arr);
    
    for (int i : result) {
        std::cout << i << " ";
    }
}