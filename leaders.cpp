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
int main() {
    freopen("/Users/xushaopeng/Desktop/codejam/kickstart/2017/Round-A/A-large-practice.in","r",stdin);
    freopen("/Users/xushaopeng/Desktop/codejam/kickstart/2017/Round-A/A-large-practice.out","w",stdout);
    int T, N;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> N;
        vector<int> nums(N);
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        vector<int> res;
        res.push_back(nums[N - 1]);
        int maxVal = nums[N - 1];
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i] >= maxVal) {
                maxVal = nums[i];
                res.push_back(maxVal);
            }
        }
        for (int i = res.size() - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
