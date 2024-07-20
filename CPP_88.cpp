#include <vector>
#include <algorithm>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::std::vector<int> sort_array(std::std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}