#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    return vec1 == vec2;
}