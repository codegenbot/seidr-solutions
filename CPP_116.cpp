#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr; // Copy input to not modify original
    std::sort(sorted_arr.begin(), sorted_arr.end());
    return sorted_arr;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}