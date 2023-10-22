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
/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
*/
vector<int> findLeaders(vector<int> nums)
{
    vector<int> res;
    if (nums.empty()) return res;
    if (nums.size() == 1) {
        res.push_back(nums[0]);
        return res;
    }
    
    int size = (int)nums.size();
    int curMax = nums[size-1];
    res.push_back(curMax);
    for (int i = size-2; i >=0; i--) {
        if (nums[i] >= curMax) {
            curMax = nums[i];
            res.push_back(curMax);
        }
    }
    return res;
}
int main() {
    vector<int> nums = {0};
    auto res = findLeaders(nums);
    for (int num:res) {
        cout << num << " ";
    }
    return 0;
}
