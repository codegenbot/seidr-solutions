```cpp
#include <vector>
#include <iostream>
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
    
    vector<int> left(nums.begin(), nums.begin() + split_index);
    vector<int> right(nums.begin() + split_index, nums.end());
    
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
    cout << "]" << endl;
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}