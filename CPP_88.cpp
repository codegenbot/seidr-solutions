#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::vector<int>(a) == std::vector<int>(b);
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.size() <= 1){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        std::sort(std::vector<int>(array).rbegin(), std::vector<int>(array).rend());
    }
    else{
        std::sort(std::vector<int>(array).begin(), std::vector<int>(array).end());
    }
    
    return array;
}