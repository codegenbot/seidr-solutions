#include <vector>
#include <cmath>
#include <algorithm>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(std::vector<float> nums) {
    float diff = std::abs(nums[0] - nums[1]);
    std::pair<float, float> result = {nums[0], nums[1]};
    
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
            if (std::abs(nums[i] - nums[j]) < diff) {
                diff = std::abs(nums[i] - nums[j]);
                result = {nums[i], nums[j]};
            }
        }
    }
    
    return result;
}

int main() {
    assert (issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}