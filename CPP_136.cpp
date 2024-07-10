#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> largest_smallest_integers(const std::vector<int>& nums) {
        auto min_max = std::minmax_element(nums.begin(), nums.end());
        return {*min_max.second, *min_max.first};
    }
    
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}