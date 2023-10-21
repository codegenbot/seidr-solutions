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
    int n;
    while(cin >> n) {
        int l = 1, r = n;
        while(l < r) {
            int mid = (l + r) / 2;
            cout << 1 << " " << mid << endl;
            string s;
            cin >> s;
            if(s == "YES") r = mid;
            else l = mid + 1;
        }
        cout << 2 << " " << l << endl;
        int x;
        cin >> x;
        cout << 3 << " " << l << endl;
    }
    return 0;
}
