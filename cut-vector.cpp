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
        vector<int> vec;
        int a;
        for(int i = 0; i < n; i++) {
            cin >> a;
            vec.push_back(a);
        }
        int left = 0, right = 0;
        int res = INT_MAX;
        for(int i = 0; i < n; i++) {
            int sum1 = 0, sum2 = 0;
            for(int j = 0; j <= i; j++) {
                sum1 += vec[j];
            }
            for(int j = i + 1; j < n; j++) {
                sum2 += vec[j];
            }
            if(abs(sum1 - sum2) < res) {
                res = abs(sum1 - sum2);
                left = sum1;
                right = sum2;
            }
        }
        cout << left << endl;
        cout << right << endl;
        cout << 0 << endl;
    }
    return 0;
}
