#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    if(nums.size() < 2) return {};
    
    float min_diff = std::abs(nums[0] - nums[1]);
    std::vector<float> result = {nums[0], nums[1]};
    
    for(size_t i = 1; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i] - nums[i + 1]);
        if(diff < min_diff) {
            min_diff = diff;
            result = {nums[i], nums[i + 1]};
        }        
    }
    
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    std::cout << "Test Passed" << std::endl;
    return 0;
}