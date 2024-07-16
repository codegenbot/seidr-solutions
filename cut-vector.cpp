#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <sstream>

int main() {
    std::vector<int> nums;
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int num;
    
    while (ss >> num) {
        nums.push_back(num);
    }

    if (nums.empty()) {
        return 1;
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = std::abs(prefixSum - suffixSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}