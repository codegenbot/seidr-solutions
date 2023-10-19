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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m.find(target - nums[i]) != m.end()) {
            cout << nums[i] << endl << target - nums[i] << endl; // Make sure that 2\n5 7\n12 -> 5\n7
            return 0;
        }
        m[nums[i]] = i;
    }
    return 0;
}
