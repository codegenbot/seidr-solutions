#include <vector>
#include <algorithm>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end());
    return sorted_arr;
}