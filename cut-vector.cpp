#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> nums;
    std::string input;
    while (std::cin >> input) {
        if (!isdigit(input[0])) {
            break;
        }
        int n = std::stoi(input);
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    std::vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvec2(nums.begin() + idx + 1, nums.end());

    for (int num : subvec1) {
        std::cout << num << std::endl;
    }
    for (int num : subvec2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}