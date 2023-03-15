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

input:
3
6356
6368
1775
output:
1
6356
2
6368
1775
*/
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int minDiff = INT_MAX, ind = -1, ind1 = -1, ind2 = -1, sum1 = 0, sum2 = 0;
    for(int i = 1; i < n; i++) {
        sum1 += v[i-1];
        sum2 = 0;
        for(int j = i; j < n; j++)
            sum2 += v[j];
        if(abs(sum1 - sum2) < minDiff) {
            minDiff = abs(sum1 - sum2);
            ind = i;
            ind1 = i-1;
            ind2 = i;
        }
    }
    if(ind == -1) {
        ind = 1; ind1 = 0; ind2 = 1;
    }
    cout << ind << endl;
    for(int i = 0; i <= ind1; i++)
        cout << v[i] << endl;
    cout << n - ind2 << endl;
    for(int i = ind2; i < n; i++)
        cout << v[i] << endl;
    return 0;
}
