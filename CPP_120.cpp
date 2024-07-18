#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<int>());
    sortedArr.resize(k);
    return sortedArr;
}