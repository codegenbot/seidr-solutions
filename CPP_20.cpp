#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> nums) {
    std::vector<float> result;
    if (nums.size() < 2) {
        return result;
    }
    
    sort(nums.begin(), nums.end());
    
    float min_diff = nums[1] - nums[0];
    for (size_t i = 1; i < nums.size() - 1; ++i) {
        float diff = nums[i + 1] - nums[i];
        if (diff < min_diff) {
            min_diff = diff;
            result = {nums[i], nums[i + 1]};
        }
    }
    
    return result;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}