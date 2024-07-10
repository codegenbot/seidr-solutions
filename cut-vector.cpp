#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int target = accumulate(nums.begin(), nums.end(), 0) / 2;

    int prefixSum = 0;
    int index = -1;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum == target) {
            index = i;
            break;
        }
        int diff1 = abs(prefixSum - target);
        int diff2 = abs(target - (prefixSum - nums[i]));
        if (diff1 < diff2) {
            index = i;
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