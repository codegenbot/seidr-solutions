#include <iostream>
#include <vector>

int basement(std::vector<int> nums);

int main() {
    std::vector<int> nums;
    int num;
    
    // Input
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // Call basement function
    int result = basement(nums);

    // Output
    std::cout << result << std::endl;

    return 0;
}

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1; // Return the index inclusive
        }
    }
    return -1; // Return -1 if no index is found
}