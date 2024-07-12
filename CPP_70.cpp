#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> strange_sort_list(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}