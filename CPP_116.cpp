#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::std::vector<int> sort_array(const std::std::vector<int>& arr) {
    std::std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());
    return sortedArr;
}