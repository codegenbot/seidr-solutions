#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    if (nums.size() > 1) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        
        int target = sum / 2;
        int prefixSum = 0;
        int minDiff = INT_MAX;
        int cutIndex = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            int diff = abs(target - prefixSum);
            if (diff < minDiff) {
                minDiff = diff;
                cutIndex = i;
            }
        }
        
        for (int i = 0; i <= cutIndex; ++i) {
            cout << nums[i] << endl;
        }
        
        cout << "---" << endl;
        
        for (int i = cutIndex + 1; i < nums.size(); ++i) {
            cout << nums[i] << endl;
        }
    }

    return 0;
}