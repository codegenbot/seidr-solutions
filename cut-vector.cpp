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
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int leftMax = 0;
    int rightMin = INT_MAX;
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < n / 2; i++) {
        leftSum += vec[i];
        rightSum += vec[n - i - 1];
        if (leftSum > leftMax) {
            leftMax = leftSum;
        }
        if (rightSum < rightMin) {
            rightMin = rightSum;
        }
    }
    int index = 0;
    if (leftMax > rightMin) {
        for (int i = 0; i < n / 2; i++) {
            leftSum -= vec[i];
            if (leftSum >= rightMin) {
                index = i;
                break;
            }
        }
    } else {
        for (int i = 0; i < n / 2; i++) {
            rightSum -= vec[n - i - 1];
            if (rightSum <= leftMax) {
                index = n - i - 1;
                break;
            }
        }
    }
    cout << index + 1 << endl;
    for (int i = 0; i <= index; i++) {
        cout << vec[i] << endl;
    }
    cout << n - index - 1 << endl;
    for (int i = index + 1; i < n; i++) {
        cout << vec[i] << endl;
    }
    return 0;
}
