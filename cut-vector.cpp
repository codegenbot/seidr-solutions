#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int minDiff = std::numeric_limits<int>::max();
    int cutSpot = -1;
    
    for (int i = 1; i < n; ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutSpot = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutSpot);
    std::vector<int> subvector2(nums.begin() + cutSpot, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : subvector2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}