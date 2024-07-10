#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    double totalSum = accumulate(nums.begin(), nums.end(), 0.0);
    double target = totalSum / 2;

    double prefixSum = 0;
    int index = -1;
    double minDiff = INT_MAX;

    for (int i = 0; i < nums.size() - 1; ++i) {
        prefixSum += nums[i];
        double diff = abs(2 * prefixSum - totalSum);
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