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
    vector<int> nums = {1, 100, 1000, 10000};
    int n = nums.size();
    vector<int> sum(n, 0);
    sum[0] = nums[0];
    for(int i=1; i<n; i++) {
        sum[i] = sum[i-1] + nums[i];
    }
    int min = INT_MAX;
    int index = 0;
    for(int i=1; i<n; i++) {
        int left = sum[i-1];
        int right = sum[n-1] - sum[i-1];
        if(abs(left-right) < min) {
            min = abs(left-right);
            index = i;
        }
    }
    for(int i=0; i<index; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for(int i=index; i<n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << 0 << endl;

    return 0;
}
