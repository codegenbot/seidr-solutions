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

void split(vector<int> &v, int left, int right) {
    if (left == right) {
        cout << "1" << endl;
        cout << v[left] << endl;
        cout << "0" << endl;
        return;
    }
    int mid = (left + right) / 2;
    split(v, left, mid);
    split(v, mid + 1, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    split(v, 0, n - 1);
}
