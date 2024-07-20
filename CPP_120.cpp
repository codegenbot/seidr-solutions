#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<int>());
    return std::vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}

int main(){
    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}