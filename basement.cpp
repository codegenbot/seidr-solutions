#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 1, -5, 4};
    int index = basement(nums);
    if (index == -1) {
        std::cout << "No such index exists." << std::endl;
    } else {
        std::cout << "First index with negative sum is: " << index << std::endl;
    }
    return 0;
}