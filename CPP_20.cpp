#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    std::vector<float> result;
    
    std::sort(result.begin(), result.end());
    float min_diff = std::numeric_limits<float>::max();
    
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i] - nums[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            result = {nums[i], nums[i + 1]};
        }
    }
    
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    
    return 0;
}