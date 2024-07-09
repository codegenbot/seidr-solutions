#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int total_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        if (total_sum < 0) { 
            return i;
        }
    }
    return -1;

}

int main() {
    std::vector<int> test_nums = {-5, 2, -4, 3};
    int result = basement(test_nums);
    if (result != -1) {
        std::cout << "Basement found at index: " << result << std::endl;
    } else {
        std::cout << "No basement found." << std::endl;
    }
    return 0;
}