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
    vector<int> v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int left = 0, right = n - 1;
    while (left < right) {
        if (v[left] == v[right]) {
            cout << left + 1 << " " << right + 1 << endl;
            return 0;
        }
        int diff = abs(v[left] - v[right]);
        if (diff <= 1) {
            cout << left + 1 << " " << right + 1 << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "No solution" << endl;
    return 0;
}