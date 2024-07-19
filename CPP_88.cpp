#include <vector>
#include <algorithm>

std::vector<int> sort_array(const std::vector<int>& array) {
    auto sortedArray = array;
    if((sortedArray.front() + sortedArray.back()) % 2 == 0){
        std::sort(sortedArray.begin(), sortedArray.end(), std::greater<int>());
    } else {
        std::sort(sortedArray.begin(), sortedArray.end());
    }
    return sortedArray;
}