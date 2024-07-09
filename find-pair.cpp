#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        int left = i + 1;
        int right = nums.size() - 1;
        while (left <= right) {
            if (nums[left] + nums[right] == complement) {
                return {nums[left], nums[right]};
            } else if (nums[left] + nums[right] < complement) {
                left++;
            } else {
                right--;
            }
        }
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << '\n' << result.second << '\n';
    return 0;
}