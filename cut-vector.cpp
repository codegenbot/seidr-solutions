#include <iostream>
#include <vector>
#include <climits>

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
    int half_sum = sum / 2;
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - half_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    std::vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : subvector1) {
        std::cout << num << std::endl;
    }
    for (int num : subvector2) {
        std::cout << num << std::endl;
    }

    return 0;
}