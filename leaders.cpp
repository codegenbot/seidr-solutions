#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::reverse(nums.begin(), nums.end());
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int num : nums) {
        if (num >= maxRight) {
            leaders.push_back(num);
            maxRight = num;
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    
    std::cout << "Enter integers (EOF to end): ";
    
    while (std::cin >> num) {
        nums.push_back(num);
    }

    std::vector<int> leaders = findLeaders(nums);

    std::cout << "Leaders: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}