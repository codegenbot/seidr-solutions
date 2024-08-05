#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    std::string input;
    std::istringstream iss;

    std::cout << "Enter numbers separated by spaces, end with non-numeric input:" << std::endl;
    
    std::getline(std::cin, input);
    iss.str(input);
    
    while (iss >> num) {
        nums.push_back(num);
    }

    std::vector<int> result = findLeaders(nums);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}