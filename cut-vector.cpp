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
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cut_index);
    vector<int> subvector2(nums.begin() + cut_index, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    
    cout << 0 << endl;
    
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}