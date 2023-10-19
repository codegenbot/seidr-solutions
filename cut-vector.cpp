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
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int sum1 = a + b + 1;
    int sum2 = a + b - 1;
    int sum3 = a + b + 2;
    int sum4 = a + b - 2;
    cout << a << endl;
    cout << b << endl;
    cout << sum << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;
    
}
