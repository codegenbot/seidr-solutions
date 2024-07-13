#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    int max = arr[n-1];
    res.push_back(max);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max) {
            max = arr[i];
            res.push_back(max);
        }
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {17, 28, 4};
    std::vector<int> result = leaders(arr);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}