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
Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
For example,
input:
1
-1
output:
0
input:
1
-100
output:
0
input:
2
-1 100
output:
0
input:
2
-95 100
output:
0
input:
2
-30 5
output:
0
*/
int main() {
    vector<int> nums;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        nums.push_back(t);
    }
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
