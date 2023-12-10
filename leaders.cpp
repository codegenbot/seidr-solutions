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

vector<int> leaders(vector<int>& nums) {
    vector<int> leaders;
    int leader = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > leader) {
            leaders.push_back(nums[i]);
            leader = nums[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> nums = {1, 451};
    vector<int> leaders = leaders(nums);
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    return 0;
}