#include <iostream>
#include <vector>
#include <climits>
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
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    int half_sum = sum / 2;

    int prefix_sum = 0;
    int best_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - half_sum);
        if (diff < best_diff) {
            best_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl; // Output subvector before cut_index
    }
    cout << 0 << endl; // Output delimiter
    for (int i = cut_index + 1; i < n; ++i) {
        cout << nums[i] << endl; // Output subvector after cut_index
    }

    return 0;
}