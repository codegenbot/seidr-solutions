#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0) {
        std::sort(array.rbegin(), array.rend());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}