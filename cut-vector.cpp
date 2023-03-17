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
int main() {
    vector<int> nums;
    int n;
    while(cin >> n) {
        nums.push_back(n);
    }
    int len = nums.size();
    if(len == 1) {
        cout << nums[0] << endl << 0 << endl;
        return 0;
    }
    int left = 0;
    int right = 0;
    int min_dif = INT_MAX;
    for(int i = 1; i < len; i++) {
        int dif = abs(nums[i] - nums[i - 1]);
        if(dif < min_dif) {
            min_dif = dif;
            left = i - 1;
            right = i;
        }
    }
    for(int i = 0; i < len; i++) {
        cout << nums[i] << endl;
    }
    cout << left << endl;
    return 0;
}
