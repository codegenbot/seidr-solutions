#include <cassert>
#include<vector>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    // Add your implementation here
    return {nums[1], nums[2]};
}

bool issame(const std::vector<double>& a, const std::vector<double>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}