#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>

std::vector<int> find_max(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

bool issame(std::vector<int> arr1, std::vector<int> arr2){
    return arr1 == arr2;
}

int main(){
    std::vector<int> arr = {5, 2, 9, 10, 1};
    int k = 3;
    arr = find_max(arr, k);
    for (int num : arr) {
        std::cout << num << " ";
    }
    
    assert(issame(find_max({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    
    return 0;
}