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
	// Because we have to return a pair of subvectors, which means we have to return start and end indices of the subvectors. 
	// I saw the constraints of the problem and the set of example input/output, so I didn't read the problem statement again. 
	// I don't have a work laptop, so I used an online IDE, and for some reason, it keeps crashing on me. So sorry if I don't have comments or if some of my codes are not optimized.
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        int dp[n];
        dp[0] = 0;
        for(int i = 1; i<(n-1); i++){
            int p = dp[i-1] + a[i-1];
            int q = a[i-1] * i;
            dp[i] = (p>q) ? q : p;
            cout << dp[i] << endl;
        }
        if(n == 1) {
            cout << a[0] << endl << 0 << endl;
        }
        else {
            int min = INT_MAX;
            int l, r;
            for(int i = 0; i<(n-1); i++){
                int sum = 0;
                for(int j = 0; j<=i; j++){
                    sum += a[j];
                }
                int d = abs(sum - dp[i]);
                if(d<=min){
                    min = d;
                    l = i+1;
                    r = n-l;
                }
            }
            cout << l << endl;
            for(int i = 0; i<l; i++){
                cout << a[i] << " ";
            }
            cout << endl << r << endl;
            for(int i = l; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        
    }
    return 0;
}
