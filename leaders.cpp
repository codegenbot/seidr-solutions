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
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        int max = nums[n - 1];
        vector<int> res;
        res.push_back(nums[n - 1]);
        for (int j = n - 2; j >= 0; j--) {
            if (nums[j] >= max) {
                res.push_back(nums[j]);
                max = nums[j];
            }
        }
        for (int j = res.size() - 1; j >= 0; j--) {
            cout << res[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
