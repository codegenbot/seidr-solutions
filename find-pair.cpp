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

vector<int> find_pair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (complement >= 0 && find(nums.begin(), nums.end(), complement) != nums.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
    }
    return result;
}

int main() {
    vector<int> nums = { 5, 7, 12 };
    int target = 9;
    vector<int> result = find_pair(nums, target);
    cout << "The two elements that sum to the target are: ";
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}