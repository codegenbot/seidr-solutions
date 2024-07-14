#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    int maxLeft = arr[0];
    for(int i=0; i<n; i++) {  
        if(arr[i] >= maxLeft) {
            res.push_back(arr[i]);
            maxLeft = arr[i];
        }
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {19};
    // or std::vector<int> arr = {409, 641, 298, 542, 212, 297, 672, 391, 471, 256, 397, 856, 501, 88, 513, 931, 977, 302, 891};
    std::vector<int> leadersResult = leaders(arr);
    for(int i: leadersResult) {
        std::cout << i << " ";
    }
    return 0;
}