#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    if (nums.size() < 2) return {};

    auto closest_it = std::min_element(nums.begin(), nums.end(), [](float a, float b) {
        return std::abs(a - 2.5f) < std::abs(b - 2.5f);
    });

    if (closest_it == nums.begin()) return { *closest_it, *(closest_it + 1) };
    if (closest_it == nums.end() - 1) return { *(closest_it - 1), *closest_it };

    return { *(closest_it - 1), *closest_it };
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}