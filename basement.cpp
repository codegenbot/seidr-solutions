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
    std::vector<int> nums = {-5, 1, -3, 4, -2};
    int result = basement(nums);
    if (result == -1) {
        std::cout << "No negative sum found.\n";
    } else {
        std::cout << "First index with negative sum: " << result << "\n";
    }
    return 0;
}