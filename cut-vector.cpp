#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <sstream>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> nums;
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int num;
    
    while (ss >> num) {
        nums.push_back(num);
    }

    if (nums.size() < 2) {
        return 1;
    }
    
    int n = nums.size();
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; i++) {
        prefixSum += nums[i - 1];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; i++) {
        std::cout << nums[i] << std::endl;
    }
    for (int i = cutIndex; i < n - 1; i++) {
        std::cout << nums[i] << std::endl;
    }
    
    if (minDiff == INT_MAX) {
        std::cout << "No valid cut found." << std::endl;
    }
    
    return 0;
}