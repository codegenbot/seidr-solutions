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
Given a positive integer n and a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example:
Input:
2
2
129
Output:
1
2
1
129
Input:
2
2
10
Output:
1
2
1
10
*/
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int min_dif = INT_MAX;
    int pos = -1;
    if (v.size() == 1) {
        for (int i = 0; i < n; i++) {
            cout << "1" << endl;
            cout << v[i] << endl;
        }
    } else {
        for (int i = 1; i < n; i++) {
            int dif = abs(v[i] - v[i - 1]);
            if (dif < min_dif) {
                min_dif = dif;
                pos = i;
            }
        }
        if (v[0] == v[n - 1]) {
            for (int i = 0; i < n; i++) {
                cout << "1" << endl;
                cout << v[i] << endl;
            }
        } else {
            for (int i = 0; i < pos; i++) {
                cout << "1" << endl;
                cout << v[i] << endl;
            }
            for (int i = pos; i < n; i++) {
                cout << "1" << endl;
                cout << v[i] << endl;
            }
        }
    }

    return 0;
}
