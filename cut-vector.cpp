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
    vector<int> input = {1, 0};
    
    int sum = 0;
    for(int i = 0; i < input.size(); i++) {
        sum += input[i];
    }
    
    int leftSum = 0, rightSum = sum;
    for(int i = 0; i < input.size(); i++) {
        rightSum -= input[i];
        if(leftSum == rightSum) {
            cout << i << endl;
            break;
        }
        leftSum += input[i];
    }
    cout << 0 << endl;
    
    return 0;
}
