#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            return {nums[i]};
        }
    }
    return nums;
}

int main() {
    int n;
    cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    std::vector<int> result = order_by_points(nums);
    for (const auto& num : result) {
        cout << num << " ";
    }
    return 0;
}