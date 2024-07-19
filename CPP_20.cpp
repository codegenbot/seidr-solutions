#include <cassert>
#include <vector>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    std::vector<double> result(nums.begin() + 1, nums.begin() + 3);
    return result;
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1);
    
    return 0;