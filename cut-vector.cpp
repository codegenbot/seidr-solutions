#include <iostream>
#include <climits>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
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
        std::cout << nums[i];
        if (i < cutIndex) {
            std::cout << " ";
        }
    }
    std::cout << std::endl << "2" << std::endl;
    
    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    
    return 0;
}