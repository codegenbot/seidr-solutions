#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cut_vector(vector<int> nums) {
    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }
    
    int half_sum = total_sum / 2;
    int current_sum = 0;
    int index = 0;
    
    while (current_sum < half_sum && index < nums.size()) {
        current_sum += nums[index];
        index++;
    }
    
    if (current_sum == half_sum) {
        return make_pair(vector<int>(nums.begin(), nums.begin() + index), vector<int>(nums.begin() + index, nums.end()));
    } else {
        int sum1 = current_sum - nums[index-1];
        int sum2 = total_sum - current_sum;
        
        if (sum1 < sum2) {
            return make_pair(vector<int>(nums.begin(), nums.begin() + index - 1), vector<int>(nums.begin() + index - 1, nums.end()));
        } else {
            return make_pair(vector<int>(nums.begin(), nums.begin() + index), vector<int>(nums.begin() + index, nums.end()));
        }
    }
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