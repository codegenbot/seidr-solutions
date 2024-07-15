#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    std::vector<int> input = {1, -2, 3, -1, 2};
    int result = basement(input);
    std::cout << "First index with negative sum: " << result << std::endl;
    return 0;
}