#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& array) {
    std::vector<int> sortedArray = array; // Make a copy to avoid modifying the input
    
    if(sortedArray.empty()) return sortedArray;
    
    if((sortedArray.front() + sortedArray.back()) % 2 == 0)
        std::sort(sortedArray.rbegin(), sortedArray.rend());
    else
        std::sort(sortedArray.begin(), sortedArray.end());
    
    return sortedArray;
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    
    return 0;
}