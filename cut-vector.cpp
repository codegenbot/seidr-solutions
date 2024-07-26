#include <iostream>

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
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
    
    vector<int> subvec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvec2;
    subvec2.insert(subvec2.end(), nums.begin() + idx + 1, nums.end());
    
    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }
    
    return 0;
}