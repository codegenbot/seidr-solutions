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
int getSum(vector<int> &v, int ind) {
    int sum = 0;
    for(int i = 0; i < ind; i++)
        sum += v[i];
    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int minDiff = INT_MAX;
    int ind = -1;
    for(int i = 1; i < n - 1; i++) {
        int sum1 = getSum(v, i);
        int sum2 = getSum(v, n) - sum1;
        if(abs(sum1 - sum2) < minDiff) {
            minDiff = abs(sum1 - sum2);
            ind = i;
        }
    }
    if(ind == -1)
        ind = 1;
    cout << ind << endl;
    for(int i = 0; i < ind; i++)
        cout << v[i] << endl;
    cout << n - ind << endl;
    for(int i = ind; i < n; i++)
        cout << v[i] << endl;
    return 0;
}
