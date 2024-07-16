#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int prefixSum = 0;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int minDiff = INT_MAX;
    int cutIndex = -1;
    int i;

    for (i = 0; i < n; i++) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int diff = abs(prefixSum - suffixSum);

        if (diff < minDiff || (diff == minDiff && abs(prefixSum - suffixSum) < minDiff)) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    for (i = 0; i < cutIndex; i++) {
        cout << nums[i] << endl;
    }
    for (i = cutIndex; i < n; i++) {
        cout << nums[i] << endl;
    }

    if (minDiff == INT_MAX) {
        cout << "No valid cut found." << endl;
    }

    return 0;
}