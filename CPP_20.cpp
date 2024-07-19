#include <cassert>
#include <vector>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    auto min_diff = std::abs(nums[0] - nums[1]);
    int min_index = 0;
    
    for (int i = 1; i < nums.size() - 1; ++i) {
        if (std::abs(nums[i] - nums[i + 1]) < min_diff) {
            min_diff = std::abs(nums[i] - nums[i + 1]);
            min_index = i;
        }
    }
    
    return {nums[min_index], nums[min_index + 1]};
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1});
}