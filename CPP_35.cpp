#include <iostream>
#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l) {
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    std::vector<float> nums = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert(std::abs(max_element(nums) - 124) < 1e-4);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}