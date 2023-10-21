/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0\n

output:
0\n

input:
1\n
0\n
output:
1\n
0\n
input:
1\n
451\n
output:
1\n
451\n
input:
2\n
1000 0\n
output:
2\n
1000 0\n
input:
2\n
0 1000\n
output:
2\n
0 1000\n
*/
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

vector<int> leader(vector<int> &nums) {
    vector<int> res;
    int len = nums.size();
    int max = nums[len - 1];
    res.push_back(max);
    for (int i = len - 2; i >= 0; --i) {
        if (nums[i] >= max) {
            max = nums[i];
            res.push_back(max);
        }
    }
    return res;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    vector<int> res = leader(nums);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
