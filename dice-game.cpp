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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
double probability(int n, int m) {
    // Write your code here
    if (n == m) {
        return 0.5;
    }
    if (n > m) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    if (m > n*2) {
        return 1.0;
    }
    
    double ans = 0;
    for (int i = n+1; i <= 2*n; ++i) {
        if (i > m) {
            ans += (i-n)*1.0/(n*n);
        } else {
            ans += (i-n)*1.0/(n*m);
        }
    }
    for (int i = m+1; i <= 2*n; ++i) {
        ans += 1.0/(n*n);
    }
    return ans;
}

int main() {
    cout << probability(100,99) << endl;
    cout << probability(1,100) << endl;
    cout << probability(1,2) << endl;
    cout << probability(2,1) << endl;
    cout << probability(99,100) << endl;
    return 0;
}
