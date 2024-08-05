#include <iostream>
#include <vector>
#include <algorithm>

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
    std::vector<int> numbers;
    int num;
    std::cout << "Enter positive integers (enter a non-positive value to stop):\n";
    
    while (std::cin >> num && num > 0) {
        numbers.push_back(num);
    }
    
    std::vector<int> result = findLeaders(numbers);
    
    std::cout << "Leaders in the vector are: ";
    for (int leader : result) {
        std::cout << leader << " ";
    }
    
    return 0;
}