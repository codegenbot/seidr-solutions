#include <iostream>
#include <vector>

std::vector<int> cutVector(std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int i;
    for (i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum > target || currSum == target) {
            break;
        }
    }

    return std::vector<int>(nums.begin(), nums.begin() + i + 1);
}

int main() {
    std::vector<int> nums;
    int num;

    // Read input from user
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // Call the cutVector function and get the resulting subvectors
    std::vector<int> subvector1 = cutVector(nums);
    std::vector<int> subvector2(nums.begin() + subvector1.size(), nums.end());

    // Print the resulting subvectors
    for (int num : subvector1) {
        std::cout << num << std::endl;
    }

    for (int num : subvector2) {
        std::cout << num << std::endl;
    }

    return 0;
}