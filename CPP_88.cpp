#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        std::sort(array.rbegin(), array.rend());
    else
        std::sort(array.begin(), array.end());
    
    return array;
}

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    return vec1 == vec2;
}