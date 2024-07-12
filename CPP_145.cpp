#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> order_by_points(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
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