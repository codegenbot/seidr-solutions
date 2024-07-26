#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        vector<int> nums(1);
        cin >> nums[0];
        cout << nums[0] << endl;
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - (sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    if (cut_idx == 0) {
        cout << 1 << endl;
        cout << nums[cut_idx] << endl;
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= cut_idx; ++i) {
            cout << nums[i] << endl;
        }
        for (int i = cut_idx + 1; i < n; ++i) {
            cout << nums[i] << endl;
        }
    }

    return 0;
}