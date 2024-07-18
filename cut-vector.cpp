#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int sumLeft = 0, sumRight = totalSum;
    int minDiff = abs(sumLeft - sumRight);
    int cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        sumLeft += nums[i];
        sumRight -= nums[i];
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << " ";
    }
    
    return 0;
}