#include <iostream>
#include <climits>
#include <vector>

std::vector<int> nums = {1, 2, 3, 4, 5}; // Example vector
int cutIndex = 2; // Example cutIndex
int minDiff = INT_MAX;

for (int i = 0; i < cutIndex; i++) {
    std::cout << nums[i] << std::endl;
}

for (int i = cutIndex; i < nums.size(); i++) {
    std::cout << nums[i] << std::endl;
}

if (minDiff == INT_MAX) {
    std::cout << "No valid cut found." << std::endl;
}
return 0;