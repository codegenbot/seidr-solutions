#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int target = totalSum / 2;

    int prefixSum = 0;
    int index = -1;
    int minDiff = INT_MAX;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int diff = abs(2 * prefixSum - totalSum);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
        if (minDiff == 0) {
            break;
        }
    }

    vector<int> subVector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subVector2(nums.begin() + index + 1, nums.end());

    for (const auto& num : subVector1) {
        cout << num << endl;
    }
    cout << "---" << endl;
    for (const auto& num : subVector2) {
        cout << num << endl;
    }

    return 0;
}