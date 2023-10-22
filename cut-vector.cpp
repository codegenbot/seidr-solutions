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
    vector<int> a;
    a.push_back(1);
    a.push_back(0);
    int n = a.size();
    int i = 0, j = n-1;
    int sum1 = a[i], sum2 = a[j];
    while (i < j) {
        if (sum1 < sum2) {
            i++;
            sum1 += a[i];
        } else if (sum1 > sum2) {
            j--;
            sum2 += a[j];
        } else {
            i++;
            sum1 += a[i];
        }
    }
    cout << i << " " << j << endl;
    return 0;
}
