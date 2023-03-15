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
#include <algorithm>
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

// 分治法
int helper(vector<int>& nums, int l, int r) {
    if (l == r) return l;
    if (l + 1 == r) {
        if (nums[l] == nums[r]) return l;
        else return -1;
    }
    int mid = (l+r)/2;
    int ll = helper(nums, l, mid);
    int rr = helper(nums, mid+1, r);
    if (ll != -1) return ll;
    if (rr != -1) return rr;
    if (nums[mid] == nums[mid+1]) return mid;
    return -1;
}
vector<int> cut(vector<int> nums) {
    int n = nums.size();
    int index = helper(nums, 0, n-1);
    vector<int> res;
    if (index == -1) {
        res.push_back(nums[0]);
        res.push_back(nums[n-1]);
        res.push_back(abs(nums[0]-nums[n-1]));
    } else {
        res.push_back(nums[index]);
        res.push_back(nums[index]);
        res.push_back(0);
    }
    return res;
}

// 动态规划
vector<int> cut2(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) dp[i][i] = 0;
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + abs(nums[i]-nums[j]));
            }
        }
    }
    vector<int> res;
    res.push_back(nums[0]);
    res.push_back(nums[n-1]);
    res.push_back(dp[0][n-1]);
    return res;
}

// 遍历
vector<int> cut3(vector<int> nums) {
    int n = nums.size();
    int l = 0, r = n-1;
    int ll = 0, rr = 0;
    int diff = INT_MAX;
    vector<int> res;
    while (l < r) {
        if (nums[l] == nums[r]) {
            ll = nums[l];
            rr = nums[r];
            break;
        } else if (nums[l] < nums[r]) {
            // 左边增大
            if (nums[l+1] - nums[l] < diff) {
                diff = nums[l+1] - nums[l];
                ll = nums[l];
                rr = nums[l+1];
            }
            l++;
        } else {
            // 右边增大
            if (nums[r] - nums[r-1] < diff) {
                diff = nums[r] - nums[r-1];
                ll = nums[r-1];
                rr = nums[r];
            }
            r--;
        }
    }
    res.push_back(ll);
    res.push_back(rr);
    res.push_back(diff);
    return res;
}


int main() {
    vector<int> nums = {1,10,100,1000};
    vector<int> res = cut3(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
