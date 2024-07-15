#include <iostream>
#include <vector>

using namespace std;

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
    
    int halfSum = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum <= halfSum) {
        currSum += nums[idx];
        idx++;
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + idx);
    vector<int> subvector2(nums.begin() + idx, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}