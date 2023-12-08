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

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = { 5, 7 };
    int target = 12;
    vector<int> result = findPair(nums, target);
    cout << "The two elements that sum to the target are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}