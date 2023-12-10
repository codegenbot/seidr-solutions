#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> result1, result2;
    int minDiff = INT_MAX;
    int diff;
    for (int i = 0; i < n - 1; i++) {
        diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            result1.clear();
            result2.clear();
            for (int j = 0; j <= i; j++) {
                result1.push_back(nums[j]);
            }
            for (int j = i + 1; j < n; j++) {
                result2.push_back(nums[j]);
            }
        }
    }
    return {result1, result2};
}

int main() {
    vector<int> nums = {1, 10, 100, 1000, 10000};
    vector<vector<int>> results = cutVector(nums);
    for (auto& result : results) {
        cout << "[" << result[0];
        for (int i = 1; i < result.size(); i++) {
            cout << ", " << result[i];
        }
        cout << "]" << endl;
    }
    return 0;
}