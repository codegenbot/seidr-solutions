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
1 0
output:
1 0 0
0

input:
1 10
output:
1 10 0
0

input:
1 100
output:
1 100 0
0

input:
1 1000
output:
1 1000 0
0

input:
1 10000
output:
1 10000 0
0

*/
int main() {
    vector<int> nums;
    int n;
    while(cin >> n) {
        nums.push_back(n);
    }
    int sum = 0;
    for(auto x: nums) {
        sum += x;
    }
    vector<int> ans;
    int left = 0;
    int right = sum;
    for(int i = 0; i < nums.size() - 1; i++) {
        left += nums[i];
        right -= nums[i];
        if(left == right) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+1]);
            break;
        }
    }

    for(auto x: ans) {
        cout << x << endl;
    }
    cout << 0 << endl;
    return 0;
}
