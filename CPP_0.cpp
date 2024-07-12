#include <algorithm>
#include <cassert>
#include <vector>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> nums = numbers;
    std::sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); ++i) {
        if (std::abs(nums[i] - nums[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    return 0;
}