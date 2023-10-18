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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example, input: 1 0 output: 1 0 0 input: 1 10 output: 1 10 0 input: 1 100 output: 1 100 0 input: 1 1000 output: 1 1000 0 input: 1 10000 output: 1 10000 0 input: 1 100000 output: 1 100000 0 input: 1 1000000 output: 1 1000000 0 input: 1 10000000 output: 1 10000000 0 input: 1 100000000 output: 1 100000000 0 input: 1 1000000000 output: 1 1000000000 0 input: 1 10000000000 output: 1 10000000000 0 input: 1 100000000000 output: 1 100000000000 0 input: 1 1000000000000 output: 1 1000000000000 0 input: 1 10000000000000 output: 1 10000000000000 0 input: 1 100000000000000 output: 1 100000000000000 0 input: 1 1000000000000000 output: 1 1000000000000000 0 input: 1 10000000000000000 output: 1 10000000000000000 0 input: 1 100000000000000000 output: 1 100000000000000000 0 input: 1 1000000000000000000 output: 1 1000000000000000000 0 input: 1 10000000000000000000 output: 1 10000000000000000000 0

*/
/*
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
100000
output:
1
100000
0

input:
1
1000000
output:
1
1000000
0

input:
1
10000000
output:
1
10000000
0

input:
1
100000000
output:
1
100000000
0

input:
1
1000000000
output:
1
1000000000
0

input:
1
10000000000
output:
1
10000000000
0

input:
1
100000000000
output:
1
100000000000
0

input:
1
1000000000000
output:
1
1000000000000
0

input:
1
10000000000000
output:
1
10000000000000
0

input:
1
100000000000000
output:
1
100000000000000
0

input:
1
1000000000000000
output:
1
1000000000000000
0

input:
1
10000000000000000
output:
1
10000000000000000
0

input:
1
100000000000000000
output:
1
100000000000000000
0

*/
int main() {
    vector<int> a = {1,100000000000000000};
    int n = a.size();
    vector<int> left(n, 0), right(n, 0);
    for(int i = 1; i < n; i++) left[i] = left[i - 1] + a[i - 1];
    for(int i = n - 2; i >= 0; i--) right[i] = right[i + 1] + a[i + 1];
    int diff = INT_MAX, index = -1;
    for(int i = 0; i < n; i++) {
        if(abs(left[i] - right[i]) < diff) {
            diff = abs(left[i] - right[i]);
            index = i;
        }
    }
    for(int i = 0; i <= index; i++) cout << a[i] << " ";
    cout << endl;
    for(int i = index; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
