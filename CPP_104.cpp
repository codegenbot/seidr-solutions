#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    auto unique_digits = [](std::vector<int> nums) {
        for(auto &num : nums) {
            std::string num_str = std::to_string(num);
            std::sort(num_str.begin(), num_str.end());
            num = std::stoi(num_str);
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    };

    return unique_digits(a) == unique_digits(b);
}