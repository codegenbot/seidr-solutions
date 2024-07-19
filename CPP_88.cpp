#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty() || b.empty()) return false;
    
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    
    if(sum % 2 == 0) {
        sort(array.begin(), array.end(), std::greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}