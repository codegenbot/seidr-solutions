#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

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

    for (int i = 0; i <= index; ++i) {
        cout << nums[i] << endl;
    }
    cout << "---" << endl;
    for (int i = index + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}