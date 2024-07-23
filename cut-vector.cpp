#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    if (nums.empty()) {
        return 0;
    }
    
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << '\n';
    }
    cout << '\n';
    
    for (int i = cut_index; i < n; ++i) {
        cout << nums[i] << '\n';
    }
    cout << '\n';
    
    return 0;
}