#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 6, 6, 23}));
    
    return 0;
}