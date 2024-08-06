#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    std::vector<float> result;
    float minDiff = std::numeric_limits<float>::max();

    for (size_t i = 0; i < nums.size() - 1; ++i) {
        float diff = std::abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            result = {nums[i], nums[i + 1]};
            minDiff = diff;
        }
    }

    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    std::cout << "Test passed!";
    return 0;
}