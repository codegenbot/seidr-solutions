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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/

int cut(vector<int> & nums, int start, int end) {
    int ans = INT_MAX;
    for (int i = start; i <= end; i++) {
        int left = 0;
        for (int j = start; j <= i; j++) {
            left += nums[j];
        }
        int right = 0;
        for (int j = i + 1; j <= end; j++) {
            right += nums[j];
        }
        ans = min(ans, abs(left - right));
    }
    return ans;
}

void printVector(vector<int> & nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void print(vector<vector<int>> & ans) {
    for (int i = 0; i < ans.size(); i++) {
        printVector(ans[i]);
    }
    cout << endl;
}

void print(vector<int> & nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

vector<vector<int>> cut(vector<int> & nums, int start, int end) {
    vector<vector<int>> ans;
    int minDiff = INT_MAX;
    for (int i = start; i <= end; i++) {
        int left = 0;
        for (int j = start; j <= i; j++) {
            left += nums[j];
        }
        int right = 0;
        for (int j = i + 1; j <= end; j++) {
            right += nums[j];
        }
        if (abs(left - right) < minDiff) {
            minDiff = abs(left - right);
            ans.clear();
            vector<int> sub1, sub2;
            for (int j = start; j <= i; j++) {
                sub1.push_back(nums[j]);
            }
            for (int j = i + 1; j <= end; j++) {
                sub2.push_back(nums[j]);
            }
            ans.push_back(sub1);
            ans.push_back(sub2);
        }
    }
    return ans;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(10);
    nums.push_back(100);
    nums.push_back(1000);
    nums.push_back(10000);
    vector<vector<int>> ans = cut(nums, 0, nums.size() - 1);
    print(ans);
    return 0;
}
