#include <cassert>
#include <vector>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    double first_element = nums[0];
    std::vector<double> closest_elements(nums.begin() + 1, nums.begin() + 3);
    
    for(const auto& num : nums) {
        if(num != first_element && (std::abs(num - first_element) < std::abs(closest_elements[0] - first_element))) {
            closest_elements[0] = num;
        }
    }
    
    return closest_elements;
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {4.1, 3.1});
    
    return 0;
}