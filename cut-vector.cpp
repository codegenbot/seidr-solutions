#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
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

    // Print the two resulting subvectors
    for (int i = 0; i < cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << nums[cut_idx] << endl; // prints the cut boundary
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}