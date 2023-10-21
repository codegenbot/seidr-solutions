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
    vector<int> input;
    int n;
    while (cin >> n) {
        input.push_back(n);
    }
    if (input.size() == 1) {
        cout << input[0] << endl;
        cout << 0 << endl;
        cout << 0 << endl;
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
        sum += input[i];
    }
    int left = 0;
    int right = sum;
    int mid = left + (right - left) / 2;
    while (left < right) {
        mid = left + (right - left) / 2;
        int temp = 0;
        int i = 0;
        while (temp < mid && i < input.size()) {
            temp += input[i];
            i++;
        }
        if (temp == mid) {
            break;
        } else if (temp > mid) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    for (int i = 0; i < input.size(); i++) {
        if (mid >= input[i]) {
            mid -= input[i];
            cout << input[i] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    cout << 0 << endl;
}
