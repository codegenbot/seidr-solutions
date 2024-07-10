#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }
    int target = totalSum;

    int prefixSum = 0;
    int index = -1;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum == target / 2) {
            index = i;
            break;
        }
        int diff1 = abs(prefixSum - target / 2);
        int diff2 = abs(target - 2 * prefixSum);
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