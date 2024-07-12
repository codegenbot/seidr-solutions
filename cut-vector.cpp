#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        int diff = abs(sum - 2 * prefixSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> subVector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subVector2(nums.begin() + cutIndex + 1, nums.end());

    for (int num : subVector1) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : subVector2) {
        cout << num << " ";
    }

    return 0;
}