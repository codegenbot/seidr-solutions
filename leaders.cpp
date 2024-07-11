#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <limits>
#include <string>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || nums[i] >= nums[i+1]) {
            leaders.push_back(nums[i]);
        }
    }
    
    std::reverse(leaders.begin(), leaders.end()); // Reverse the leaders to maintain original order
    
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