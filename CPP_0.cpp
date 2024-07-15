#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(std::vector<float> nums, float target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (abs(nums[i] - nums[j]) <= target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    return 0;
}