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
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        v.push_back(value);
    }
    
    int half = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        half += i ? v[i-1] : 0;
        sum += v[i];
        
        int diff = abs(half - (sum - half));
        if (diff < v[i] || (diff == v[i] && half > sum - half)) {
            cout << i + 1 << endl;
            int j = 0;
            for (j = 0; j < i; j++) {
                cout << v[j] << endl;
            }
            j++;
            for (; j < n; j++) {
                cout << v[j-1] << endl;
            }
            
            return 0;
        }
    }
    cout << v[0] << endl;
    int j = 1;
    for (; j < n; j++) {
        cout << v[j-1] << endl;
    }
    j++;
    for (; j < n; j++) {
        cout << v[j-1] << endl;
    }
    
    return 0;
}
