#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || i == n - 1) {
            res[0].push_back(nums[i]);
            res[1].push_back(nums[i]);
        } else {
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j < i; ++j) {
                leftSum += nums[j];
            }
            for (int j = i; j < n; ++j) {
                rightSum += nums[j];
            }
            
            if (leftSum == rightSum) {
                res[0].push_back(nums[i]);
                res[1].push_back(nums[i]);
            } else {
                int diff = abs(leftSum - rightSum);
                for (int j = i; j < n; ++j) {
                    if (abs(leftSum + nums[j] - rightSum) <= diff) {
                        res[0].push_back(nums[i]);
                        res[1].push_back(nums[j]);
                        return res;
                    }
                }
            }
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
    
    vector<vector<int>> res = cutVector(nums);
    
    cout << "[";
    for (int i = 0; i < res[0].size(); ++i) {
        cout << res[0][i];
        if (i != res[0].size() - 1) {
            cout << ", ";
        }
    }
    cout << "], [";
    
    for (int i = 0; i < res[1].size(); ++i) {
        cout << res[1][i];
        if (i != res[1].size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}