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
    int n;
    while (cin >> n) {
        vector<int> nums;
        vector<int> res;
        nums.push_back(n);
        int maxi = n;
        while (cin >> n && n) {
            nums.push_back(n);
            maxi = max(maxi, n);
        }
        int mid = (maxi + 1) / 2;
        int gap = INT_MAX;
        for (int i = 0; i < nums.size() - 1; i++) {
            int sum1 = 0;
            int sum2 = 0;
            for (int j = 0; j <= i; j++) {
                sum1 += nums[j];
            }
            for (int j = i + 1; j < nums.size(); j++) {
                sum2 += nums[j];
            }
            int g = min(abs(sum1 - sum2), abs(sum1 - sum2 + 2 * nums[i + 1]));
            if (g < gap) {
                res.clear();
                res.push_back(i);
                res.push_back(g);
            }
            gap = min(gap, g);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i == res[0] + 1) {
                cout << "[" << nums[i] << "]";
            }
            else {
                if (i == 0) {
                    cout << nums[i] << " ";
                }
                else {
                    cout << nums[i] << endl;
                }
                
            }
        }
        cout << endl;
    }
    return 0;
}
