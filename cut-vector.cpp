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
    vector<int> vec;
    int n;
    while(cin >> n) {
        vec.push_back(n);
    }
    int len = vec.size();
    int left = 0, right = len - 1;
    int leftSum = vec[left], rightSum = vec[right];
    while(left < right) {
        if(leftSum < rightSum) {
            left++;
            leftSum += vec[left];
        }
        else if(leftSum > rightSum) {
            right--;
            rightSum += vec[right];
        }
        else {
            left++;
            right--;
            leftSum += vec[left];
            rightSum += vec[right];
        }
    }
    if(leftSum == rightSum) {
        for(int i = 0; i <= left; i++) {
            cout << vec[i] << endl;
        }
        for(int i = right; i < len; i++) {
            cout << vec[i] << endl;
        }
    }
    else {
        for(int i = 0; i < len; i++) {
            cout << vec[i] << endl;
        }
    }
    return 0;
}
