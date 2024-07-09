#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }
    
    if (nums.size() > 1) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum / 2;
        int prefixSum = 0;
        int index = 0;

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            if (prefixSum >= target) {
                int diff1 = prefixSum - target;
                int diff2 = target - (prefixSum - nums[i]);
                if (diff1 < diff2) {
                    index = i;
                    break;
                }
            }
        }

        for (int i = 0; i <= index; ++i) {
            cout << nums[i] << endl;
        }
        cout << "---" << endl;
        for (int i = index + 1; i < nums.size(); ++i) {
            cout << nums[i] << endl;
        }
    }

    return 0;
}