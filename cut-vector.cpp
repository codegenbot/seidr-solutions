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
    for (int i = 0; i < 100; i++) {
        vec.push_back(i);
    }
    vector<int> result1;
    vector<int> result2;
    int small_diff = INT_MAX;
    for (int i = 1; i < vec.size(); i++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < vec.size(); j++) {
            if (j < i) {
                sum1 += vec[j];
            } else {
                sum2 += vec[j];
            }
        }
        
        if (sum1 == sum2) {
            result1 = vector<int>(vec.begin(), vec.begin()+i);
            result2 = vector<int>(vec.begin()+i, vec.end());
            break;
        } else if (abs(sum1 - sum2) < small_diff) {
            result1 = vector<int>(vec.begin(), vec.begin()+i);
            result2 = vector<int>(vec.begin()+i, vec.end());
        }
        
    }
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << endl;
    }
}
