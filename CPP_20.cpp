#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& nums) {
    float avg = 0;
    for (float num : nums) {
        avg += num;
    }
    avg /= nums.size();

    float min_diff = std::abs(avg - nums[0]);
    std::vector<float> closest_elements;
    for (float num : nums) {
        if (std::abs(avg - num) < min_diff) {
            min_diff = std::abs(avg - num);
            closest_elements.clear();
            closest_elements.push_back(num);
        } else if (std::abs(avg - num) == min_diff) {
            closest_elements.push_back(num);
        }
    }

    return closest_elements;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.0001) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}