#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || nums[i] != nums[i + 1]) {
            res.first = vector<int>(nums.begin(), nums.begin() + i);
            res.second = vector<int>(nums.begin() + i, nums.end());
            break;
        }
    }
    
    return res;
}

int main() {
    int n; 
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(nums);

    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}