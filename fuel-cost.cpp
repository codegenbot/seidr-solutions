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
Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector.
For example,
input:
1
6
output:
0
input:
1
7
output:
0
input:
1
8
output:
0
input:
1
9
output:
1
input:
1
10
output:
1
*/
int main() {
    int n;
    while (cin >> n) {
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 3) {
                continue;
            }
            res += (nums[i] / 3 - 2);
        }
        cout << res << endl;
    }
    return 0;
}
