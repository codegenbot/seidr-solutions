#include <iostream>
using namespace std;

vector<int> cutVector(const vector<int>& nums) {
    int index = -1;
    int prefixSum = 0;
    int target = 0;
    vector<int> result1, result2;

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
        result1.push_back(nums[i]);
    }
    for (int i = index + 1; i < nums.size(); ++i) {
        result2.push_back(nums[i]);
    }
    
    return {result1, result2};
}