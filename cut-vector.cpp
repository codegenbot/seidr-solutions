#include <iostream>
#include <vector>

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
    
    int half_sum = sum / 2;
    int curr_sum = 0;
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        curr_sum += nums[i];
        if (curr_sum >= half_sum) {
            idx = i;
            break;
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