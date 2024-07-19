#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& array) {
    std::vector<int> sortedArray = array;
    if ((sortedArray.front() + sortedArray.back()) % 2 == 0) {
        std::sort(sortedArray.begin(), sortedArray.end(), std::greater<int>());
    } else {
        std::sort(sortedArray.begin(), sortedArray.end());
    }
    return sortedArray;
}