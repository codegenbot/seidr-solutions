#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end());
    return sorted_arr;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), std::vector<int>({2, 4, 8, 16, 32})));
    return 0;
}