#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        std::cout << nums[i] << '\n';
    }
    std::cout << '\n';
    for (int i = cutIndex; i < nums.size(); ++i) {
        std::cout << nums[i] << '\n';
    }
    std::cout << '\n';
    
    return 0;
}