#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<float> sort_even(std::vector<float> nums) {
    std::vector<float> even_nums;
    for (const auto& num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    size_t idx = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (static_cast<int>(nums[i]) % 2 == 0) {
            nums[i] = even_nums[idx++];
        }
    }
    return nums;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}