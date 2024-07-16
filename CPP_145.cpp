#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_vector(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    assert(issame(sort_vector(std::vector<int>{0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}