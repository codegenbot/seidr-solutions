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
    while (cin >> n) {
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
    }
    int left = 0, right = vec.size() - 1;
    int leftSum = vec[left], rightSum = vec[right];
    while (left < right) {
        if (leftSum < rightSum) {
            leftSum += vec[++left];
        } else {
            rightSum += vec[--right];
        }
    }
    left++;
    cout << left << endl << right << endl;
    for (vector<int>::iterator vi = vec.begin(); vi != vec.end(); ++vi) {
        cout << *vi << " ";
    }
    cout << endl;
    for (int i = 0; i < left; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    for (int i = right; i < n; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
