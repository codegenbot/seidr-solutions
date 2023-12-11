#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] > max) {
            max = nums[i];
            result.push_back(max);
        }
    }
    return result;
}