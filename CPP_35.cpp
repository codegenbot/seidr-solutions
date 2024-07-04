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
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<float> nums(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::cout << "Maximum element is " << max_element(nums) << std::endl;
    return 0;
}