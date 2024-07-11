#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <limits>
#include <string>

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
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    std::string input;
    
    std::cout << "Enter integers (EOF to end): ";
    
    while (std::cin >> num) {
        nums.push_back(num);
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::vector<int> leaders = findLeaders(nums);

    std::cout << "Leaders: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}