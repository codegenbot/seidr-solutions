#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> firstSubvector(nums.begin(), nums.begin() + cutIndex);
    vector<int> secondSubvector(nums.begin() + cutIndex, nums.end());
    
    for (int num : firstSubvector) {
        cout << num << endl;
    }
    cout << endl;
    for (int num : secondSubvector) {
        cout << num << endl;
    }
    
    return 0;
}