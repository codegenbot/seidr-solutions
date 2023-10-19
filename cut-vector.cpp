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
int main() {
    vector<int> nums;
    int n;
    while(cin >> n) {
        nums.push_back(n);
    }
    if(nums.size() == 1) {
        cout << nums[0] << endl;
        cout << 0 << endl;
        cout << 0 << endl;
    } else {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int half = sum/2;
        int l = 0;
        int r = nums.size()-1;
        int lsum = 0;
        int rsum = 0;
        for(int i = 0; i < nums.size(); i++) {
            lsum += nums[i];
            if(lsum >= half) {
                l = i;
                break;
            }
        }
        for(int i = nums.size()-1; i >= 0; i--) {
            rsum += nums[i];
            if(rsum >= half) {
                r = i;
                break;
            }
        }
        if(lsum - nums[l] > rsum - nums[r]) {
            l--;
        } else {
            r++;
        }
        for(int i = 0; i <= l; i++) {
            cout << nums[i] << endl;
        }
        for(int i = r; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }
}
