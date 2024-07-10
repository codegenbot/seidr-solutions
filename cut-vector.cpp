#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <climits>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int totalSum = accumulate(nums.begin(), nums.end(), 0);

    int prefixSum = 0;
    int index = -1;
    int closestSum = INT_MAX;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int diff = abs(2 * prefixSum - totalSum);
        if (diff < closestSum) {
            closestSum = diff;
            index = i;
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subvector2(nums.begin() + index + 1, nums.end());

    for (const auto& num : subvector1) {
        cout << num << endl;
    }
    cout << "---" << endl;
    for (const auto& num : subvector2) {
        cout << num << endl;
    }

    return 0;
}