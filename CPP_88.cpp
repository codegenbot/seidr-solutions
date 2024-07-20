#include <vector>
#include <algorithm>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> std::sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}