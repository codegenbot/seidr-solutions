#include <vector>
#include <algorithm>
#include <cassert>

template <typename T>
std::vector<T> sort_array(std::vector<T> array) {
    if (array.empty()) 
        return array;
    
    int sum = array.front() + array.back();
    if (sum % 2 == 0)
        std::sort(array.rbegin(), array.rend());
    else
        std::sort(array.begin(), array.end());
    
    return array;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}