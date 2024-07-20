#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), std::vector<int>{11, 14, 21, 23}));
    return 0;
}