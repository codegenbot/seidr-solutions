#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    
    std::cout << "Enter integers (EOF to end): ";
    
    std::string input;
    while (std::cin >> input) {
        if (input == "EOF") {
            break;
        }
        nums.push_back(std::stoi(input));
    }

    std::vector<int> leaders = findLeaders(nums);

    std::cout << "Leaders: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}