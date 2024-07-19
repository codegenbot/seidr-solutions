#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sortVector(std::vector<int> array){
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}