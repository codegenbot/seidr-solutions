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
    vector<int> v;
    while (cin >> n) {
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++) {
        int cur = v[i];
        bool flag = true;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] >= cur) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << cur << endl;
        }
    }
    return 0;
}
