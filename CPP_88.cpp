#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& array) {
    std::vector<int> sorted_array = array;
    
    if (sorted_array.empty()) {
        return sorted_array;
    }
    
    if ((sorted_array.front() + sorted_array.back()) % 2 == 0) {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    
    return sorted_array;
}