#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    if (abs(sum - 2 * prefixSum) < abs(sum - 2 * (prefixSum - nums[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << 0 << std::endl;
    } else {
        for (int i = 0; i < idx; ++i) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << 0 << std::endl;
    }
    
    return 0;
}