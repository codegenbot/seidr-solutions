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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0;
    while (i < n - 1 && a[i] <= a[i + 1]) {
        i++;
    }
    if (i == n - 1) {
        cout << a[0] << endl;
        cout << a[n - 1] << endl;
        cout << 0 << endl;
        return 0;
    }
    int j = n - 1;
    while (j > 0 && a[j] >= a[j - 1]) {
        j--;
    }
    if (j == 0) {
        cout << a[0] << endl;
        cout << a[n - 1] << endl;
        cout << 0 << endl;
        return 0;
    }
    int min_diff = INT_MAX;
    int min_index = i;
    while (i <= j) {
        int diff = abs(a[i - 1] - a[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            min_index = i;
        }
        i++;
    }
    cout << a[0] << endl;
    for (int i = 1; i < min_index; i++) {
        cout << a[i] << endl;
    }
    cout << a[min_index + 1] << endl;
    for (int i = min_index + 2; i < n; i++) {
        cout << a[i] << endl;
    }
    cout << 0 << endl;
    return 0;
}
