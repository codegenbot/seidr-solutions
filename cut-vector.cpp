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
#include <algorithm>
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

input:
1
1
output:
1
1
0

input:
10
0
output:
10
0
0

input:
100
1
output:
100
0
0

input:
100
100
output:
100
0
0

input:
100
1000
output:
100
1000
0

input:
100
10000
output:
100
10000
0

input:
1000
1000
output:
1000
0
0

input:
1000
10000
output:
1000
10000
0

input:
10000
10000
output:
10000
0
0
*/
int main() {
    int n, v;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; ++i) {
        cin >> v;
        A.push_back(v);
    }
    
    sort(A.begin(), A.end());
    
    int res1 = 0, res2 = 0;
    int d = INT_MAX;
    
    for (int i = 0; i < n - 1; ++i) {
        if (abs(A[i] - A[i + 1]) < d) {
            d = abs(A[i] - A[i + 1]);
            res1 = A[i];
            res2 = A[i + 1];
        }
    }
    cout << res1 << " " << res2 << endl;
    
}
