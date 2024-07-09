#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using std::vector;
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();

    int maxSoFar = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxSoFar) {
            leaders.push_back(nums[i]);
            maxSoFar = nums[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    return leaders;
}