#include <cassert>
#include <vector>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    auto min_element = std::min_element(nums.begin(), nums.end());
    auto min_element_index = std::distance(nums.begin(), min_element);
    return std::vector<double>{nums[min_element_index], nums[min_element_index + 1]};
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {1.1, 2.2});
    
    return 0;
}