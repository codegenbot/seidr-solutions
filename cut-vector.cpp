#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <numeric>

int main() {
    std::vector<int> nums;
    int num;
    
    while(std::cin >> num && num != -1) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = std::numeric_limits<int>::max();

    for (int i = 1; i < n; i++) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

    for (int i = cutIndex; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}