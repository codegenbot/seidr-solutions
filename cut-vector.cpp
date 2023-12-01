#include <vector>
#include <iostream>

pair<vector<int>, vector<int>> cut_vector(const vector<int>& nums) {
    int n = nums.size();
    int left_sum = nums[0];
    int right_sum = 0;
    for (int i = 1; i < n; i++) {
        right_sum += nums[i];
    }
    
    int min_diff = abs(left_sum - right_sum);
    int cut_index = 0;
    
    for (int i = 1; i < n; i++) {
        left_sum += nums[i];
        right_sum -= nums[i];
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    return make_pair(subvector1, subvector2);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cut_vector(nums);
    
    for (int num : result.first) {
        cout << num << endl;
    }
    
    for (int num : result.second) {
        cout << num << endl;
    }
    
    return 0;
}