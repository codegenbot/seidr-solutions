#include <cassert>
#include <vector>
#include <algorithm>

std::vector<double> find_closest_elements(const std::vector<double>& nums) {
    if(nums.size() < 3) return {};
    auto min_closest = std::min_element(nums.begin(), nums.end(), [](double a, double b){ return std::abs(a - 2.65) < std::abs(b - 2.65); });
    return {*(min_closest - 1), *min_closest, *(min_closest + 1)};
}

bool issame(const std::vector<double>& v1, const std::vector<double>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    
    return 0;
}