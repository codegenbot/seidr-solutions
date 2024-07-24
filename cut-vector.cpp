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
    int runningSum = 0;
    int cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        runningSum += nums[i];
        if (runningSum >= halfSum) {
            cutIndex = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}