#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    vector<int> left = {nums[0]};
    for (int i = 1; i < split_index; i++) {
        left.push_back(nums[i]);
    }
    
    vector<int> right = nums.substr(split_index).begin(), end);
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [" << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << " " << result.second[i];
    }
    cout << "]" << endl;
    
    return 0;
}