```c++
#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 1) return arr;
    
    for(int i=n-2; i>=0; --i){
        while(i > 0 && arr[i] <= arr[i+1]) i--;
        res.push_back(arr[i]);
    }
    
    res.push_back(arr[n-1]); 
    return res;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    for(auto x : leaders(arr)) std::cout << x << " ";
    return 0;
}