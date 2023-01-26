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
10
input:
1
451
output:
1451
input:
2
1000 0
output:
21000 0
input:
2
0 1000
output:
11000
*/
int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> nums;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    vector<int> res;
    res.push_back(nums[n - 1]);
    int max_num = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_num) {
            max_num = nums[i];
            res.push_back(max_num);
        }
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
    return 0;
}
