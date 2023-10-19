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
#include <sstream>
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
    cin >> n;
    stringstream s;
    s << n;
    string str = s.str();
    int len = str.length();
    int total = 0;
    for(int i = 0; i < len; i++) {
        int digit = str[i] - '0';
        total += digit * (pow(10, len - i - 1));
    }
    total = total + 1;
    stringstream ss;
    ss << total;
    string str2 = ss.str();
    int len2 = str2.length();
    int total2 = 0;
    for(int i = 0; i < len2; i++) {
        int digit = str2[i] - '0';
        total2 += digit * (pow(10, len2 - i - 1));
    }
    cout << total2 << endl;
    cout << 0 << endl;
}
