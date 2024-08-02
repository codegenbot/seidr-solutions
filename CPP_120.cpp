#include <iostream>
#include <vector>

bool issame(std::vector<int> a,std::vector<int>b){
    return a==b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.begin() + k);
    return arr;
}