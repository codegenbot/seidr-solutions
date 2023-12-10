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
    int currentLeader = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > currentLeader) {
            leaders.push_back(nums[i]);
            currentLeader = nums[i];
        }
    }
    return leaders;
}