#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::std::vector<int> sort_array(const std::std::vector<int>& array) {
    auto sortedArray = array;
    if ((sortedArray.front() + sortedArray.back()) % 2 == 0) {
        std::sort(sortedArray.begin(), sortedArray.end(), std::greater<int>());
    } else {
        std::sort(sortedArray.begin(), sortedArray.end());
    }
    return sortedArray;
}