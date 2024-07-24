
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int sum = 0, halfSum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int currSum = 0, start = 0, end = 0;
    int minDiff = INT_MAX, totalSum = sum;
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        int diff = abs(totalSum - 2 * currSum);
        if (diff < minDiff) {
            minDiff = diff;
            start = min(currSum, totalSum - currSum);
            end = max(currSum, totalSum - currSum);
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + start);
    vector<int> subvector2(nums.begin() + start, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}