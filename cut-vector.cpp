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
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        int sum = 0;
        for (int vv : v)
            sum += vv;
        int halfsum = sum / 2 + 1;
        int ans = 0;
        if (sum < 3)
            ans = 0;
        else {
            int s = 0;
            for (int i = 0; i < n; i++) {
                s += v[i];
                if (s >= halfsum) {
                    ans = s - v[i];
                    break;
                }
            }
            if (ans == 0) ans = sum - v[n - 1];
        }
        printf("%d\n", ans);
    }
    return 0;
}
