#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    
    int prefix_sum = 0;
    int cut_idx = -1;
    int min_diff = INT_MAX;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - (sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
    vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

    for (int num : subvec1) {
        cout << num << endl;
    }
    for (int num : subvec2) {
        cout << num << endl;
    }

    return 0;
}