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
#include <algorithm>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs. For example, input: 1 0 output: 1 0 0 input: 1 10 output: 1 10 0 input: 1 100 output: 1 100 0 input: 1 1000 output: 1 1000 0 input: 1 10000 output: 1 10000 0.


input:
18
5517 5022 7682 1071 7805 3862 9057 1631 7693 9528 6378 6628 2680 372 2232 4358 1281 2025
output:
8
5517 5022 7682 1071 7805 3862 9057 1631
10
7693 9528 6378 6628 2680 372 2232 4358 1281 2025

*/

int main() {
    vector<int> a = {5517, 5022, 7682, 1071, 7805, 3862, 9057, 1631, 7693, 9528, 6378, 6628, 2680, 372, 2232, 4358, 1281, 2025};
    sort(a.begin(), a.end());
    int n = a.size();
    vector<int> left(n, 0), right(n, 0);
    for(int i = 1; i < n; i++) left[i] = left[i - 1] + a[i];
    for(int i = n - 2; i >= 0; i--) right[i] = right[i + 1] + a[i];
    int diff = INT_MAX, index = -1;
    for(int i = 0; i < n; i++) {
        if(abs(left[i] - right[i]) < diff) {
            diff = abs(left[i] - right[i]);
            index = i;
        }
    }
    for(int i = 0; i <= index; i++) cout << a[i] << " ";
    cout << endl;
    for(int i = index + 1; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
