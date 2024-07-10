#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums, int target) {
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

    vector<int> firstVector;
    for (int i = 0; i <= index; ++i) {
        firstVector.push_back(nums[i]);
    }

    vector<int> secondVector;
    for (int i = index + 1; i < nums.size(); ++i) {
        secondVector.push_back(nums[i]);
    }

    return firstVector;
    return secondVector;
}