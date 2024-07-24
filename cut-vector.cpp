#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    while (true) {
        std::cin.clear();
        std::cin >> n;
        if (std::cin.fail()) {
            break;
        }
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int closestSum = 0;
    int minDiff = INT_MAX;
    int idx = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        closestSum += nums[i];
        int diff = std::abs(sum - 2 * closestSum);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    std::vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subvec2(nums.begin() + idx + 1, nums.end());

    for (int num : subvec1) {
        std::cout << num << std::endl;
    }
    for (int num : subvec2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}