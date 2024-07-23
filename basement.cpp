#include <iostream>
#include <vector>
#include <stdexcept>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    throw std::runtime_error("No basement found");

}

int main() {
    try {
        std::vector<int> nums = {-1, 2, 3, -2, 5};
        return basement(nums);
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}