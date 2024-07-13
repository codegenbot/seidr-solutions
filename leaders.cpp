#include <vector>
#include <initializer_list>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    int maxRightSoFar = *std::max_element(arr.begin(), arr.end()); // initialize with maximum of all elements
    res.push_back(maxRightSoFar);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
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