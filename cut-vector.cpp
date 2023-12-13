#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cut_vector(const vector<int>& nums) {
    int n = nums.size();
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += nums[i];
    }
    
    int min_diff = abs(left_sum - right_sum);
    int cut_index = 0;
    
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i + 1;
        }
    }
    
    vector<int> left_vector(nums.begin(), nums.begin() + cut_index);
    vector<int> right_vector(nums.begin() + cut_index, nums.end());
    
    return make_pair(left_vector, right_vector);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cut_vector(nums);
    
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }
    
    return 0;
}