#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> sortedArr = arr;
    std::partial_sort(sortedArr.begin(), sortedArr.begin() + k, sortedArr.end(), std::greater<int>());
    return std::vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), std::vector<int>{243, 3, 2}));
    
    return 0;
}