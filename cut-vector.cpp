#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int prefixSum[n + 1];
    prefixSum[0] = 0;

    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }

    int totalSum = prefixSum[n];
    int minDiff = INT_MAX;
    int cutPoint = -1;

    for (int i = 1; i < n; ++i) {
        int leftSum = prefixSum[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutPoint = i;
        }
    }

    for (int i = 0; i < cutPoint; ++i) {
        cout << nums[i] << endl;
    }

    cout << 0 << endl;

    for (int i = cutPoint; i < n; ++i) {
        cout << nums[i] << endl;
    }

    cout << 0 << endl;

    return 0;
}